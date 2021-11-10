<b><h1>Loops</h1></b>
Loops can execute a block of code as long as a specified condition is reached.

Loops are handy because they save time, reduce errors, and they make code more readable.

<b><h2>While Loop</h2></b>
The while loop loops through a block of code as long as a specified condition is true:

<span class="javakeywordcolor" style="color:mediumblue">while</span> (<em>condition</em>) {<br><span class="javanumbercolor" style="color:red">
</span>    <i>&nbsp; <span class="commentcolor" style="color:green">// code block to be executed</span></i><br></span><span class="javanumbercolor" style="color:red">
</span>
}

<b><h2>Do/While Loop</h2></b>
The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

<span class="javakeywordcolor" style="color:mediumblue">do</span> {<br><span class="javanumbercolor" style="color:red">
</span>    <i>&nbsp; <span class="commentcolor" style="color:green">// code block to be executed<br></span>
</i>}<br>
<span class="javakeywordcolor" style="color:mediumblue">while</span> (<em>condition</em>);

<b><h2>For Loop</h2></b>
When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:

<span class="javakeywordcolor" style="color:mediumblue">for</span> (<i>statement 1</i>;<i> statement 2</i>;<i> statement 3</i>) {<br><span class="javanumbercolor" style="color:red">
</span>    &nbsp; <i><span class="commentcolor" style="color:green">// code block to be executed</span></i><br></span><span class="javanumbercolor" style="color:red">
</span> }

<p><strong>Statement 1</strong> is executed (one time) before the execution of the code block.</p>
<p><strong>Statement 2</strong> defines the condition for executing the code block.</p>
<p><strong>Statement 3</strong> is executed (every time) after the code block has been executed.</p>

<b><h2>Break</h2></b>
<p>You have already seen the <code class="w3-codespan">break</code> statement used in an earlier chapter of this tutorial. It was used to "jump out" of a <a href="cpp_switch.asp"><code class="w3-codespan">switch</code></a> statement.</p>
<p>The <code class="w3-codespan">break</code> statement can also be used to jump out of a 
<strong>loop</strong>.</p>
<p>This example jumps out of the loop when <code class="w3-codespan">i</code> is equal to 4:</p>

<span class="javakeywordcolor" style="color:mediumblue">for</span> (<span class="javakeywordcolor" style="color:mediumblue">int</span> i = <span class="javanumbercolor" style="color:red">0</span>; i &lt; <span class="javanumbercolor" style="color:red">10</span>; i++) {<br>&nbsp; <span class="javakeywordcolor" style="color:mediumblue">if</span> (i == <span class="javanumbercolor" style="color:red">4</span>) {<br>&nbsp;&nbsp;&nbsp; <span class="javanumbercolor" style="color:red">
</span>  <span class="javakeywordcolor" style="color:mediumblue">break</span>;<br>&nbsp; }<br>&nbsp; cout &lt;&lt; i &lt;&lt; <span class="javastringcolor" style="color:brown">"\n"</span>;<br>} 

