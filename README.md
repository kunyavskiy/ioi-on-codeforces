# What is this

This project is an issue tracker for codeforces instance of IOI problems [archive](https://ioi.contest.codeforces.com/). 

# What should I do here?

* Help with problem materials
  * Pull request with fixing typos in statements
  * Provide missing statements in Russian
  * Provide statements in other languages, if you are ready to commit to doing that for a significant amount of problems
  * Pull request better validators (e.g., validate groups or add them to problems where there are no validators)
    * Most new problems had validators in the archive, but they are not polygon-compatible. Adapting them should be easier than writing new ones.
  * Send generators of better test data to issues
  	* Do that only for problems containing validator.
  	* Do that only for problems with subtasks, as otherwise, it significantly changes scoring
  	* If the test is valid only for some subtasks, the validator should support validating subtasks.
* Report misconfigurations of codeforces problems with issues
  * Inconsistencies between statements and problem materials
  * Missing materials
  * Wrong scoring 
  * Wrong subtask for some tests
    * Best way to report this is to provide a validator that supports groups for the problem.

Please, if you plan to make some significant effort, arrange it in advance with me. I can't guarantee that every work will be adopted. 

# What shouldn't I do here?

* Ask for help with solving problems - use codeforces forum or read editorials instead
