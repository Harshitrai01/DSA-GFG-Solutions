<h2><a href="https://practice.geeksforgeeks.org/problems/maximum-sum-problem2211/1?page=1&difficulty[]=0&status[]=unsolved&company[]=Amazon&company[]=Microsoft&company[]=Flipkart&company[]=Adobe&company[]=Google&company[]=Samsung&company[]=Accolite&company[]=MakeMyTrip&company[]=Snapdeal&company[]=Zoho&company[]=Paytm&company[]=Goldman%20Sachs&company[]=Morgan%20Stanley&company[]=Walmart&company[]=FactSet&company[]=OYO%20Rooms&company[]=D-E-Shaw&company[]=Ola%20Cabs&company[]=MAQ%20Software&company[]=Oracle&company[]=SAP%20Labs&company[]=Hike&company[]=VMWare&company[]=Qualcomm&company[]=Facebook&company[]=Cisco&company[]=Visa&company[]=Intuit&company[]=Directi&company[]=Linkedin&company[]=Yahoo&company[]=Payu&company[]=Wipro&company[]=Synopsys&company[]=Citrix&company[]=Salesforce&company[]=Codenation&company[]=TCS&company[]=PayPal&company[]=Twitter&company[]=Housing.com&company[]=Media.net&company[]=Yatra.com&company[]=Nagarro&company[]=Nutanix&company[]=Accenture&company[]=Grofers&company[]=Atlassian&company[]=Myntra&company[]=One97&company[]=InfoEdge&company[]=Infosys&company[]=IBM&company[]=Opera&company[]=Quikr&company[]=Apple&company[]=Arcesium&company[]=Nvidia&company[]=Jabong&company[]=Cognizant&company[]=Bloomberg&company[]=Expedia&company[]=Sapient&company[]=Swiggy&company[]=Airtel&company[]=DE%20Shaw&company[]=Dell&company[]=HCL&company[]=Intel&company[]=American%20Express&company[]=Sprinklr&company[]=Zomato&company[]=Intuit%20&company[]=Nagarro%20&company[]=Media.net%20&company[]=Cognizant%20&category[]=Dynamic%20Programming&sortBy=accuracy">Maximum Sum Problem</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">A number <strong>n </strong>can be broken&nbsp;into&nbsp;three parts<strong> n/2, n/3, and n/4&nbsp;</strong>(consider only the&nbsp;<strong>integer </strong>part). Each number obtained in this process can be divided further recursively.&nbsp;Find the <strong>maximum sum </strong>that can be obtained by&nbsp;summing up the divided parts&nbsp;together.<br>
<strong>Note: It is possible that we don't divide the number at all</strong><strong>.</strong></span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 12
<strong>Output:</strong> 13
<strong>Explanation</strong>:</span>&nbsp;<span style="font-size:18px">B</span><span style="font-size:18px">reak n = 12 in three parts
{12/2, 12/3, 12/4} = {6, 4, 3},&nbsp;now current
sum is = (6 + 4 + 3) = 13. Further breaking 6,
4 and 3 into parts will produce sum less than
or equal to 6, 4 and 3 respectively.</span><span style="font-size:18px">
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
n = 24
<strong>Output:</strong> 27
<strong>Explanation</strong>: Break n = 24 in three parts
{24/2, 24/3, 24/4} = {12, 8, 6}, now current
sum is = (12 + 8 + 6) = 26 . But recursively
breaking 12 would produce value 13.
So our maximum sum is 13 + 8 + 6 = 27.
</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>maxSum()&nbsp;</strong>which accepts an integer n and returns the maximum sum.<br>
<br>
<strong>Expected Time Complexity:&nbsp;</strong>O(n)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(n)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
0 &lt;= n &lt;= 10<sup>6</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Morgan Stanley</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;