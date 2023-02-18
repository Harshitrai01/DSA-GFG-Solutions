<h2><a href="https://practice.geeksforgeeks.org/problems/all-unique-permutations-of-an-array/1?page=1&difficulty[]=1&company[]=Amazon&company[]=Microsoft&company[]=Flipkart&company[]=Adobe&company[]=Google&company[]=Samsung&company[]=Accolite&company[]=MakeMyTrip&company[]=Snapdeal&company[]=Zoho&company[]=Paytm&company[]=Goldman%20Sachs&company[]=Morgan%20Stanley&company[]=Walmart&company[]=OYO%20Rooms&company[]=FactSet&company[]=D-E-Shaw&company[]=Ola%20Cabs&company[]=Oracle&company[]=MAQ%20Software&company[]=SAP%20Labs&company[]=Hike&company[]=Facebook&company[]=VMWare&company[]=Qualcomm&company[]=Cisco&company[]=Visa&company[]=Intuit&company[]=Directi&company[]=Linkedin&company[]=Yahoo&company[]=Payu&company[]=Wipro&company[]=Synopsys&company[]=Citrix&company[]=Salesforce&company[]=Codenation&company[]=TCS&company[]=PayPal&company[]=Twitter&company[]=Housing.com&company[]=Media.net&company[]=Yatra.com&company[]=Nagarro&company[]=Nutanix&company[]=Accenture&company[]=Grofers&company[]=Atlassian&company[]=Myntra&company[]=One97&company[]=InfoEdge&company[]=Infosys&company[]=IBM&company[]=Opera&company[]=Quikr&company[]=Apple&company[]=Arcesium&company[]=Nvidia&company[]=Jabong&company[]=Cognizant&company[]=Bloomberg&company[]=Expedia&company[]=Sapient&company[]=Swiggy&company[]=Airtel&company[]=DE%20Shaw&company[]=Dell&company[]=HCL&company[]=Intel&company[]=American%20Express&company[]=Sprinklr&company[]=Zomato&company[]=Intuit%20&company[]=Nagarro%20&company[]=Media.net%20&company[]=Cognizant%20&category[]=Recursion&sortBy=accuracy">All Unique Permutations of an array</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>arr[] </strong>of length <strong>n. </strong>Find all possible unique permutations of the array.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
n = 3
arr[] = {1, 2, 1}
<strong>Output</strong>: 
1 1 2
1 2 1
2 1 1
<strong>Explanation</strong>:
These are the only possible unique permutations
for the given array.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
n = 2
arr[] = {4, 5}
<strong>Output</strong>: 
4 5
5 4
</span></pre>

<p><br>
<strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You don't need to read input or print anything.&nbsp;You only need to complete the function<strong> uniquePerms()&nbsp;</strong>that takes an integer n, and an array arr of size n as input and returns a sorted list of lists containing all unique permutations of the array.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> &nbsp;O(n*n!)<br>
<strong>Expected Auxilliary Space:</strong> O(n*n!)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 ≤ n ≤ 9<br>
1 ≤ arr<sub>i</sub> ≤ 10</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Recursion</code>&nbsp;<code>Backtracking</code>&nbsp;<code>Algorithms</code>&nbsp;