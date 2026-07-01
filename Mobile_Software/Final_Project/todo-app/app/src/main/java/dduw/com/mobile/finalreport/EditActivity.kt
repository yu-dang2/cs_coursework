package dduw.com.mobile.finalreport

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.lifecycle.lifecycleScope
import dduw.com.mobile.finalreport.data.Todo
import dduw.com.mobile.finalreport.data.TodoDatabase
import dduw.com.mobile.finalreport.databinding.ActivityEditBinding
import kotlinx.coroutines.launch

class EditActivity : AppCompatActivity() {
    private lateinit var binding: ActivityEditBinding
    private val todoDao by lazy { TodoDatabase.getDatabase(this).todoDao() }
    private var currentTodo: Todo? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityEditBinding.inflate(layoutInflater)
        setContentView(binding.root)

        val todoId = intent.getLongExtra("todo_id", -1)

        lifecycleScope.launch {
            currentTodo = todoDao.getTodoById(todoId)
            currentTodo?.let { todo ->
                binding.etTitle.setText(todo.title)
                binding.etMemo.setText(todo.memo)
                binding.etDueDate.setText(todo.dueDate)
            }
        }

        binding.btnUpdate.setOnClickListener {
            val updatedTodo = currentTodo?.copy(
                title = binding.etTitle.text.toString(),
                memo = binding.etMemo.text.toString(),
                dueDate = binding.etDueDate.text.toString()
            )
            lifecycleScope.launch {
                updatedTodo?.let { todoDao.updateTodo(it) }
                finish()
            }
        }
    }
}