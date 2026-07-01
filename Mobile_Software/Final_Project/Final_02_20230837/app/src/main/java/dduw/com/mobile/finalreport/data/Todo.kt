package dduw.com.mobile.finalreport.data

import androidx.room.Entity
import androidx.room.PrimaryKey

@Entity(tableName = "todo_table")
data class Todo(
    @PrimaryKey(autoGenerate = true)
    val id: Long = 0,
    val title: String,
    val memo: String,
    val dueDate: String,
    val isCompleted: Boolean = false
)
