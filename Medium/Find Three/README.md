<h2><a href="https://www.geeksforgeeks.org/batch/competitive-programming/track/cp-math-mathematicalPrinciples/problem/find-three-1667813143">Find Three</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>Arr[ ]</strong> of <strong>N</strong> integers. Check whether there exist three indexes <strong>(1 <u>&lt;</u>&nbsp;i &lt; j &lt; k <u>&lt;</u>&nbsp;N) </strong>such that <strong>Arr[i]&nbsp;&amp;&nbsp;Arr[j] ≠&nbsp;0,</strong>&nbsp;<strong>Arr[i] &amp;&nbsp;Arr[k] ≠&nbsp;0,</strong> and <strong>Arr[j] &amp; Arr[k] ≠&nbsp;0</strong>. Where <strong>'&amp;'</strong> represents bitwise AND operator.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Input Format: </strong><br>
The first line of the input contains a single integer <strong>T</strong>&nbsp;denoting the number of test cases. The description of&nbsp;<strong>T</strong> test cases is as follows:</span></p>

<ul>
	<li><span style="font-size:18px">The first line of each test case contains the integer N<strong>.</strong></span></li>
	<li><span style="font-size:18px">The next line contains N space-separated integers.</span></li>
</ul>

<p><br>
<span style="font-size:18px"><strong>Output Format:</strong><br>
For each test case, print the answer (<strong>"YES"</strong> if indexes exits otherwise <strong>"NO"</strong> ) to the problem&nbsp;followed by a new line character.<br>
<strong>Note:</strong>&nbsp;The generated output is white space sensitive, do not add any extra spaces or&nbsp;unnecessary newline characters.<br>
<br>
<strong>Constraints:</strong><br>
1 <em>≤</em>&nbsp;T <em>≤</em>&nbsp;1000<br>
1&nbsp;<em>≤</em>&nbsp;N&nbsp;<em>≤</em>&nbsp;500<br>
1&nbsp;<em>≤</em>&nbsp;arr [ i ][ j ]&nbsp;<em>≤</em>&nbsp;10<sup>9</sup><br>
<em>It is guaranteed that the sum of <strong>N </strong>over all test cases does not exceed <strong>500</strong></em><br>
<br>
<strong>Example:</strong></span></p>

<div style="background:#eeeeee; border:1px solid #cccccc; padding:5px 10px"><span style="font-size:18px"><strong>Sample Input 1:</strong><br>
4<br>
5&nbsp;<br>
3 4 11 1 5<br>
6<br>
12 3 6 8 3 9<br>
7<br>
1 2 1 2 1 2 1<br>
5&nbsp;<br>
4 2 1 8 32<br>
<strong>Sample Output:</strong><br>
YES<br>
YES<br>
YES<br>
NO</span></div>

<p><span style="font-size:18px"><strong>Explanation: </strong><br>
For Test Case #1:-&nbsp;<br>
N = 5&nbsp;<br>
Arr [ ]&nbsp; = {3, 1, 11, 5, 4}&nbsp;</span><br>
<span style="font-size:18px">One possible set of three indexes are {1, 3, 5}</span></p>
</div>