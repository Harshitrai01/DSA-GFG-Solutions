<h2><a href="https://practice.geeksforgeeks.org/problems/combination-sum-1587115620/1?page=1&difficulty[]=1&company[]=Amazon&company[]=Microsoft&company[]=Flipkart&company[]=Adobe&company[]=Google&company[]=Samsung&company[]=Accolite&company[]=MakeMyTrip&company[]=Snapdeal&company[]=Zoho&company[]=Paytm&company[]=Goldman%20Sachs&company[]=Morgan%20Stanley&company[]=Walmart&company[]=OYO%20Rooms&company[]=FactSet&company[]=D-E-Shaw&company[]=Ola%20Cabs&company[]=Oracle&company[]=MAQ%20Software&company[]=SAP%20Labs&company[]=Hike&company[]=Facebook&company[]=VMWare&company[]=Qualcomm&company[]=Cisco&company[]=Visa&company[]=Intuit&company[]=Directi&company[]=Linkedin&company[]=Yahoo&company[]=Payu&company[]=Wipro&company[]=Synopsys&company[]=Citrix&company[]=Salesforce&company[]=Codenation&company[]=TCS&company[]=PayPal&company[]=Twitter&company[]=Housing.com&company[]=Media.net&company[]=Yatra.com&company[]=Nagarro&company[]=Nutanix&company[]=Accenture&company[]=Grofers&company[]=Atlassian&company[]=Myntra&company[]=One97&company[]=InfoEdge&company[]=Infosys&company[]=IBM&company[]=Opera&company[]=Quikr&company[]=Apple&company[]=Arcesium&company[]=Nvidia&company[]=Jabong&company[]=Cognizant&company[]=Bloomberg&company[]=Expedia&company[]=Sapient&company[]=Swiggy&company[]=Airtel&company[]=DE%20Shaw&company[]=Dell&company[]=HCL&company[]=Intel&company[]=American%20Express&company[]=Sprinklr&company[]=Zomato&company[]=Intuit%20&company[]=Nagarro%20&company[]=Media.net%20&company[]=Cognizant%20&category[]=Recursion&curated[]=7&sortBy=submissions">Combination Sum</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array of integers and a sum B, find all unique combinations in the array where the sum is equal to B. The same number may be chosen from the array&nbsp;any number of times to make B.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong><br>
&nbsp;&nbsp;&nbsp; &nbsp; &nbsp; <strong>1.</strong> All numbers will be positive integers.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<strong> 2.</strong> Elements in a combination (a1, a2, …, ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; <strong>3.</strong> The combinations themselves must be sorted in ascending order.</span></p>

<p><br>
<strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">N = 4
arr[] = {7,2,6,5}
B = 16
<strong>Output:
</strong>(2 2 2 2 2 2 2 2)
(2 2 2 2 2 6)
(2 2 2 5 5)
(2 2 5 7)
(2 2 6 6)
(2 7 7)
(5 5 6)</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">N = 11
arr[] = {6,5,7,1,8,2,9,9,7,7,9}
B = 6
<strong>Output:
</strong>(1 1 1 1 1 1)
(1 1 1 1 2)
(1 1 2 2)
(1 5)
(2 2 2)
(6)<strong>
</strong></span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
Your task is to complete the function <strong>combinationSum()&nbsp;</strong>which takes the array A and a sum B as inputs and returns a list of list denoting the required combinations in the order specified in the problem description. The printing is done by the driver's code.&nbsp;If no set can be formed with the given set, then&nbsp; "Empty" (without quotes) is printed.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(X<sup>2</sup> * 2<sup>N</sup>), where X is average of summation B/arr<sub>i </sub>for every number in the array.<br>
<strong>Expected Auxiliary Space:</strong> O(X * 2<sup>N</sup>)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 30<br>
1 &lt;= A[i] &lt;= 20<br>
1 &lt;= B &lt;= 100</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Adobe</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Recursion</code>&nbsp;<code>Backtracking</code>&nbsp;<code>Algorithms</code>&nbsp;