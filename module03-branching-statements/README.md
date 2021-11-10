<b><h2>Booleans</h2></b>
Very often, in programming, you will need a data type that can only have one of two values, like:

    YES / NO<br>
    ON / OFF<br>
    TRUE / FALSE<br>

For this, C++ has a bool data type, which can take the values true (1) or false (0).

<b><h2>Boolean Expression</h2></b>
A Boolean expression is a C++ expression that returns a boolean value: 1 (true) or 0 (false).

You can use a comparison operator, such as the greater than (>) operator to find out if an expression (or a variable) is true:

int x = 10;<br>
int y = 9;<br>
cout << (x > y); // returns 1 (true), because 10 is higher than 9 <br>

<b><h2>Conditions and If Statements</h2></b>

<p>C++ supports the usual logical conditions from mathematics:</p>
<ul>
<li>Less than: <span class="w3-codespan">a &lt; b</span></li>
<li>Less than or equal to: <span class="w3-codespan">a &lt;= b</span></li>
<li>Greater than: <span class="w3-codespan">a &gt; b</span></li>
<li>Greater than or equal to: <span class="w3-codespan">a &gt;= b</span></li>
<li>Equal to <span class="w3-codespan">a == b</span></li>
<li>Not Equal to: <span class="w3-codespan">a != b</span></li>
</ul>
<p>You can use these conditions to perform different actions for different decisions.</p>
<p>C++ has the following conditional statements:</p>
<ul>
  <li>Use <code class="w3-codespan">if</code> to specify a block of code to be executed, if a specified condition is true</li>
  <li>Use <code class="w3-codespan">else</code> to specify a block of code to be executed, if the same condition is false</li>
  <li>Use <code class="w3-codespan">else if</code> to specify a new condition to test, if the first condition is false</li>
  <li>Use <code class="w3-codespan">switch</code> to specify many alternative blocks of code to be executed</li>
</ul>

<b><h3>The if Statement</h3></b>
Use the if statement to specify a block of C++ code to be executed if a condition is true.

if (condition) {<br>
  // block of code to be executed if the condition is true<br>
}<br>

<b><h3>The else Statement</h3></b>
Use the else statement to specify a block of code to be executed if the condition is false.

if (condition) {<br>
  // block of code to be executed if the condition is true<br>
} else {<br>
  // block of code to be executed if the condition is false<br>
}<br>

<b><h3>The else if Statement</h3></b>
Use the else if statement to specify a new condition if the first condition is false.

if (condition1) {<br>
  // block of code to be executed if condition1 is true<br>
} else if (condition2) {<br>
  // block of code to be executed if the condition1 is false and condition2 is true<br>
} else {<br>
  // block of code to be executed if the condition1 is false and condition2 is false<br>
}<br>

<b><h3>Short Hand If...Else (Ternary Operator)</h3></b>
There is also a short-hand if else, which is known as the ternary operator because it consists of three operands. It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements:

variable = (condition) ? expressionTrue : expressionFalse;

int time = 20;<br>
string result = (time < 18) ? "Good day." : "Good evening.";<br>
cout << result; 

<b><h3>Switch Statements</h3></b>
Use the switch statement to select one of many code blocks to be executed.

<span class="javakeywordcolor" style="color:mediumblue">switch</span>(<em>expression</em>) {<br>&nbsp; <span class="javakeywordcolor" style="color:mediumblue">case</span> x:<br>&nbsp;&nbsp;&nbsp; <em><span class="commentcolor" style="color:green">// code 
  block</span></em><br></span>&nbsp;&nbsp;&nbsp; <span class="javakeywordcolor" style="color:mediumblue">break</span>;<br>&nbsp; <span class="javakeywordcolor" style="color:mediumblue">case</span> y:<br>&nbsp;&nbsp;&nbsp;<span class="javanumbercolor" style="color:red">
</span>  <em><span class="commentcolor" style="color:green">// code block</span></em><br>&nbsp;&nbsp;&nbsp; <span class="javakeywordcolor" style="color:mediumblue">break</span>;<br>&nbsp; <span class="javakeywordcolor" style="color:mediumblue">default</span>:<br>&nbsp;&nbsp;&nbsp;<span class="javanumbercolor" style="color:red">
</span>  <em><span class="commentcolor" style="color:green">// code block</span></em><br><span class="javanumbercolor" style="color:red">
</span>  }

<p>This is how it works:</p>
<ul>
<li>The <code class="w3-codespan">switch</code> expression is evaluated once</li>
<li>The value of the expression is compared with the values of each <code class="w3-codespan">case</code></li>
<li>If there is a match, the associated block of code is executed</li>
<li>The <code class="w3-codespan">break</code> and <code class="w3-codespan">default</code> keywords are optional, and will be described later in this chapter</li>
</ul>



    
