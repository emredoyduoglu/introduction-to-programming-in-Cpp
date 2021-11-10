
<b><h1>DATA TYPES</h1></b>


int myNum = 5;               // Integer (whole number)<br>
float myFloatNum = 5.99;     // Floating point number<br>
double myDoubleNum = 9.98;   // Floating point number<br>
char myLetter = 'D';         // Character<br>
bool myBoolean = true;       // Boolean<br>
string myText = "Hello";     // String <br>

<table class="ws-table-all notranslate">
<tbody><tr>
<th style="width:15%">Data Type</th>
<th style="width:15%">Size</th>
<th style="width:70%">Description</th>
</tr>
<tr>
<td><code class="w3-codespan" style="padding-left:0">int</code></td>
<td>4 bytes</td>
<td>Stores whole numbers, without decimals</td>
</tr>
<tr>
<td><code class="w3-codespan" style="padding-left:0;background-color:white">float</code></td>
<td>4 bytes</td>
<td>Stores fractional numbers, containing one or more decimals. Sufficient for 
storing 7 decimal digits</td>
</tr>
<tr>
<td><code class="w3-codespan" style="padding-left:0">double</code></td>
<td>8 bytes</td>
<td>Stores fractional numbers, containing one or more decimals. Sufficient for 
storing 15 decimal digits</td>
</tr>
<tr>
<td><code class="w3-codespan" style="padding-left:0;background-color:white">boolean</code></td>
<td>1 byte</td>
<td>Stores true or false values</td>
</tr>
<tr>
<td><code class="w3-codespan" style="padding-left:0">char</code></td>
<td>1 byte</td>
<td>Stores a single character/letter/number, or ASCII values</td>
</tr>

</tbody>
</table>


<b><h2>Numeric Types</h2></b>
Use int when you need to store a whole number without decimals, like 35 or 1000, and float or double when you need a floating point number (with decimals), like 9.99 or 3.14515.

int myNum = 1000;<br>
float myNum = 5.75;<br>
double myNum = 19.99;

<div class="w3-note w3-panel">
<p><code class="w3-codespan">float</code> vs. <code class="w3-codespan">double</code></p>
<p>The <strong>precision</strong> of a floating point value indicates how many digits the value can have 
after the decimal point.
The precision of <code class="w3-codespan">float</code> is only six or seven 
decimal digits, while <code class="w3-codespan">double</code> variables have a precision 
of about 15 digits. Therefore it is safer to use <code class="w3-codespan">double</code> for most calculations.</p>
</div>

<b><h3>Scientific Numbers</h3></b>

A floating point number can also be a scientific number with an "e" to indicate the power of 10:

float f1 = 35e3;<br>
double d1 = 12E4;

<b><h2>Boolean Types</h2></b>
A boolean data type is declared with the bool keyword and can only take the values true or false. When the value is returned, true = 1 and false = 0.

bool isCodingFun = true;<br>
bool isFishTasty = false;<br>
cout << isCodingFun;  // Outputs 1 (true)<br>
cout << isFishTasty;  // Outputs 0 (false) <br>

<b><h2>Character Types</h2></b>
The char data type is used to store a single character. The character must be surrounded by single quotes, like 'A' or 'c':

char myGrade = 'B';<br>
cout << myGrade;<br>

Alternatively, you can use ASCII values to display certain characters:

char a = 65, b = 66, c = 67;<br>
cout << a;<br>
cout << b;<br>
cout << c; <br>

<b><h2>String Types</h2></b>
The string type is used to store a sequence of characters (text). This is not a built-in type, but it behaves like one in its most basic usage. String values must be surrounded by double quotes:

// Include the string library<br>
#include <string><br><br>
// Create a string variable<br>
string greeting = "Hello";<br><br>
// Output string value<br>
cout << greeting; <br>
  


