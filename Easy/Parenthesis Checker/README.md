<h2><a href="https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1?page=1&company[]=Amazon&company[]=Microsoft&company[]=Flipkart&company[]=Adobe&company[]=Google&company[]=Samsung&company[]=Accolite&company[]=MakeMyTrip&company[]=Snapdeal&company[]=Zoho&company[]=Paytm&company[]=Goldman%20Sachs&company[]=Morgan%20Stanley&company[]=Walmart&company[]=OYO%20Rooms&company[]=FactSet&company[]=D-E-Shaw&company[]=Ola%20Cabs&company[]=Oracle&company[]=MAQ%20Software&company[]=SAP%20Labs&company[]=VMWare&company[]=Hike&company[]=Facebook&company[]=Qualcomm&company[]=Intuit&company[]=Cisco&company[]=Visa&company[]=Directi&company[]=Linkedin&company[]=Yahoo&company[]=Payu&company[]=Wipro&company[]=Synopsys&company[]=Citrix&company[]=Salesforce&company[]=Codenation&company[]=PayPal&company[]=TCS&company[]=Twitter&company[]=Housing.com&company[]=Atlassian&company[]=Media.net&company[]=Yatra.com&company[]=Nagarro&company[]=Nutanix&company[]=Swiggy&company[]=Accenture&company[]=Grofers&company[]=Myntra&company[]=One97&company[]=InfoEdge&company[]=Expedia&company[]=Infosys&company[]=IBM&company[]=Opera&company[]=Quikr&company[]=Apple&company[]=Arcesium&company[]=Nvidia&company[]=Jabong&company[]=Cognizant&company[]=Bloomberg&company[]=Sapient&company[]=Airtel&company[]=Sprinklr&company[]=DE%20Shaw&company[]=Dell&company[]=HCL&company[]=Intel&company[]=American%20Express&company[]=Zomato&company[]=Intuit%20&company[]=Nagarro%20&company[]=Media.net%20&company[]=Cognizant%20&sortBy=submissions">Parenthesis Checker</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an expression string <strong>x</strong>. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.<br>
For example, the function should return 'true' for exp = [()]{}{[()()]()} and 'false' for exp = [(]).</span></p>

<p><strong><span style="font-size:18px">Note: </span></strong><span style="font-size:18px">The drive code prints "balanced" if function return true, otherwise it prints "not balanced".</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
{([])}
<strong>Output</strong>: 
true
<strong>Explanation</strong>: 
<span style="color:#ff0000">{</span> <span style="color:#00ff00">(</span> <span style="color:#0000cd">[</span> <span style="color:#0000cd">]</span> <span style="color:#00ff00">)</span> <span style="color:#ff0000">}.&nbsp;</span><span style="color:#000000">Same colored brackets can form 
balanced pairs, with 0 number of 
unbalanced bracket.</span>
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
()
<strong>Output</strong>: 
true
<strong>Explanation</strong>: 
<span style="color:#00ff00">()</span><span style="color:#000000">. Same bracket can form balanced pairs, 
and here only 1 type of bracket is 
present and in balanced way.</span></span>
</pre>

<p><span style="font-size:18px"><strong>Example 3:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
([]
<strong>Output</strong>: 
false
<strong>Explanation</strong>: 
<span style="color:#00ff00">(</span><span style="color:#0000cd">[]</span>.<span style="color:#000000"> Here square bracket is balanced but 
the small bracket is not balanced and 
Hence , the output will be unbalanced.</span></span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a <strong>function </strong>problem. You only need to complete the function <strong>ispar()&nbsp;</strong>that takes a&nbsp;<strong>string </strong>as a&nbsp;<strong>parameter </strong>and returns a boolean value&nbsp;<strong>true </strong>if <strong>brackets </strong>are <strong>balanced </strong>else <strong>returns false</strong>. The <strong>printing </strong>is done <strong>automatically </strong>by the <strong>driver code</strong>.</span><br>
<br>
<span style="font-size:18px"><strong>Expected Time Complexity</strong>: O(|x|)<br>
<strong>Expected Auixilliary Space</strong>: O(|x|)</span><br>
<br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ |x| ≤ </span><span style="font-size:18px">32000</span></p>

<p>&nbsp;</p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>Oracle</code>&nbsp;<code>Walmart</code>&nbsp;<code>Adobe</code>&nbsp;<code>Google</code>&nbsp;<code>Yatra.com</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Stack</code>&nbsp;<code>STL</code>&nbsp;<code>Data Structures</code>&nbsp;