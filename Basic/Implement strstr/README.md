<h2><a href="https://practice.geeksforgeeks.org/problems/implement-strstr/1?page=1&difficulty[]=-1&company[]=Amazon&company[]=Microsoft&company[]=Flipkart&company[]=Adobe&company[]=Google&company[]=Samsung&company[]=Accolite&company[]=MakeMyTrip&company[]=Snapdeal&company[]=Zoho&company[]=Paytm&company[]=Goldman%20Sachs&company[]=Morgan%20Stanley&company[]=Walmart&company[]=OYO%20Rooms&company[]=FactSet&company[]=D-E-Shaw&company[]=Ola%20Cabs&company[]=Oracle&company[]=MAQ%20Software&company[]=SAP%20Labs&company[]=VMWare&company[]=Hike&company[]=Facebook&company[]=Qualcomm&company[]=Intuit&company[]=Cisco&company[]=Visa&company[]=Directi&company[]=Linkedin&company[]=Yahoo&company[]=Payu&company[]=Wipro&company[]=Synopsys&company[]=Citrix&company[]=Salesforce&company[]=Codenation&company[]=PayPal&company[]=TCS&company[]=Twitter&company[]=Housing.com&company[]=Atlassian&company[]=Media.net&company[]=Yatra.com&company[]=Nagarro&company[]=Nutanix&company[]=Swiggy&company[]=Accenture&company[]=Grofers&company[]=Myntra&company[]=One97&company[]=InfoEdge&company[]=Expedia&company[]=Infosys&company[]=IBM&company[]=Opera&company[]=Quikr&company[]=Apple&company[]=Arcesium&company[]=Nvidia&company[]=Jabong&company[]=Cognizant&company[]=Bloomberg&company[]=Sapient&company[]=Airtel&company[]=Sprinklr&company[]=DE%20Shaw&company[]=Dell&company[]=HCL&company[]=Intel&company[]=American%20Express&company[]=Zomato&company[]=Intuit%20&company[]=Nagarro%20&company[]=Media.net%20&company[]=Cognizant%20&sortBy=submissions">Implement strstr</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Your task is to implement the function <strong>strstr</strong>. The function takes two strings as&nbsp;arguments <strong>(s,x)</strong> and&nbsp;&nbsp;locates the occurrence of the string<strong> x</strong>&nbsp;in the string <strong>s</strong>.&nbsp;The function returns and integer denoting the <strong>first occurrence </strong>of the string <strong>x</strong> in <strong>s</strong> (0 based indexing).</span></p>

<p><strong><span style="font-size:18px">Note:&nbsp;</span></strong><span style="font-size:18px">You are not allowed to use inbuilt function.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>s = GeeksForGeeks, x = Fr
<strong>Output: </strong>-1<strong>
Explanation: </strong>Fr is not present in the
string GeeksForGeeks as substring.<strong>
</strong></span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>s = GeeksForGeeks, x = For
<strong>Output: </strong>5<strong>
Explanation: </strong>For is present as substring
in GeeksForGeeks from index 5 (0 based
indexing).</span>
</pre>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You don't have to take any input. Just complete the <strong>strstr() </strong>function which takes two strings <strong>str, target</strong> as an input parameter. The function returns -1 if no match if found else it returns an integer denoting the first occurrence of the x in the string s.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(|s|*|x|)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Note </strong>: Try to solve the question in constant space complexity.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= |s|,|x| &lt;= 100</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Facebook</code>&nbsp;<code>Qualcomm</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Pattern Searching</code>&nbsp;<code>Design-Pattern</code>&nbsp;<code>Data Structures</code>&nbsp;