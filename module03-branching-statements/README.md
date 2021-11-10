<b><h2>Booleans</h2></b>
Very often, in programming, you will need a data type that can only have one of two values, like:

    YES / NO<br>
    ON / OFF<br>
    TRUE / FALSE<br>

For this, C++ has a bool data type, which can take the values true (1) or false (0).

<b><h2>Boolean Expression</h2></b>
A Boolean expression is a C++ expression that returns a boolean value: 1 (true) or 0 (false).

You can use a comparison operator, such as the greater than (>) operator to find out if an expression (or a variable) is true:

int x = 10;
int y = 9;
cout << (x > y); // returns 1 (true), because 10 is higher than 9 

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
