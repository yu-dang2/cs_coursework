package dduw.com.mobile.finalreport

import android.content.Intent
import android.os.Bundle
import androidx.appcompat.app.AlertDialog
import androidx.appcompat.app.AppCompatActivity
import androidx.lifecycle.Lifecycle
import androidx.lifecycle.lifecycleScope
import androidx.lifecycle.repeatOnLifecycle
import androidx.recyclerview.widget.LinearLayoutManager
import dduw.com.mobile.finalreport.data.TodoDatabase
import dduw.com.mobile.finalreport.databinding.ActivityMainBinding
import kotlinx.coroutines.flow.distinctUntilChanged
import kotlinx.coroutines.launch

class MainActivity : AppCompatActivity() {
    private lateinit var binding: ActivityMainBinding
    private lateinit var adapter: TodoAdapter

    private val database by lazy { TodoDatabase.getDatabase(this) }
    private val todoDao by lazy { database.todoDao() }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        adapter = TodoAdapter()
        binding.recyclerView.adapter = adapter
        binding.recyclerView.layoutManager = LinearLayoutManager(this)

        adapter.itemClickListener = { todo ->
             val intent = Intent(this, EditActivity::class.java)
             intent.putExtra("todo_id", todo.id)
             startActivity(intent)
        }

        adapter.itemLongClickListener = { todo ->
            AlertDialog.Builder(this).apply {
                setTitle("할 일 삭제")
                setMessage("'${todo.title}' 항목을 삭제하시겠습니까?")
                setPositiveButton("삭제") { _, _ ->
                    lifecycleScope.launch {
                        todoDao.deleteTodo(todo)
                    }
                }
                setNegativeButton("취소", null)
                show()
            }
            true
        }

        lifecycleScope.launch {
            repeatOnLifecycle(Lifecycle.State.STARTED) {
                val listFlow = todoDao.getAllTodos()
                listFlow.distinctUntilChanged().collect { items ->
                    adapter.submitList(items)
                }
            }
        }
    }
}