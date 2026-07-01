package dduw.com.mobile.finalreport

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.lifecycle.lifecycleScope
import dduw.com.mobile.finalreport.data.Todo
import dduw.com.mobile.finalreport.data.TodoDatabase
import dduw.com.mobile.finalreport.databinding.ActivityAddBinding
import kotlinx.coroutines.launch

class AddActivity : AppCompatActivity() {
    private lateinit var binding: ActivityAddBinding
    private val todoDao by lazy { TodoDatabase.getDatabase(this).todoDao() }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityAddBinding.inflate(layoutInflater)
        setContentView(binding.root)

        binding.btnAdd.setOnClickListener {
            val title = binding.etTitle.text.toString()
            val memo = binding.etMemo.text.toString()
            val dueDate = binding.etDueDate.text.toString()

            if (title.isBlank()) {
                binding.etTitle.error = "할 일을 입력하세요"
                return@setOnClickListener
            }

            lifecycleScope.launch {
                todoDao.insertTodo(Todo(title = title, memo = memo, dueDate = dueDate))
                finish()
            }
        }
    }
}
