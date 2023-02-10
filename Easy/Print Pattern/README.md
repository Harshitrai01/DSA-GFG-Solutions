<h2><a href="https://practice.geeksforgeeks.org/problems/print-pattern3549/1?page=1&difficulty[]=0&status[]=unsolved&company[]=Amazon&company[]=Microsoft&company[]=Flipkart&company[]=Adobe&company[]=Google&company[]=Samsung&company[]=Accolite&company[]=MakeMyTrip&company[]=Snapdeal&company[]=Zoho&company[]=Paytm&company[]=Goldman%20Sachs&company[]=Morgan%20Stanley&company[]=Walmart&company[]=OYO%20Rooms&company[]=FactSet&company[]=D-E-Shaw&company[]=Ola%20Cabs&company[]=Oracle&company[]=MAQ%20Software&company[]=SAP%20Labs&company[]=Hike&company[]=Facebook&company[]=VMWare&company[]=Qualcomm&company[]=Cisco&company[]=Visa&company[]=Intuit&company[]=Directi&company[]=Linkedin&company[]=Yahoo&company[]=Payu&company[]=Wipro&company[]=Synopsys&company[]=Citrix&company[]=Salesforce&company[]=Codenation&company[]=TCS&company[]=PayPal&company[]=Twitter&company[]=Housing.com&company[]=Media.net&company[]=Yatra.com&company[]=Nagarro&company[]=Nutanix&company[]=Accenture&company[]=Grofers&company[]=Atlassian&company[]=Myntra&company[]=One97&company[]=InfoEdge&company[]=Infosys&company[]=IBM&company[]=Opera&company[]=Quikr&company[]=Apple&company[]=Arcesium&company[]=Nvidia&company[]=Jabong&company[]=Cognizant&company[]=Bloomberg&company[]=Expedia&company[]=Sapient&company[]=Swiggy&company[]=Airtel&company[]=DE%20Shaw&company[]=Dell&company[]=HCL&company[]=Intel&company[]=American%20Express&company[]=Sprinklr&company[]=Zomato&company[]=Intuit%20&company[]=Nagarro%20&company[]=Media.net%20&company[]=Cognizant%20&category[]=Recursion&sortBy=accuracy">Print Pattern</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Print a sequence of numbers starting with <strong>N</strong>&nbsp;where A[0] = N, <strong><em>without using loop</em></strong>, in which&nbsp; A[i+1] = A[i] - 5,&nbsp; until A[i] &gt; 0.&nbsp;After that&nbsp;A[i+1] = A[i] + 5&nbsp; repeat it until A[i] = N.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> N = 16
<strong>Output:</strong> 16 11 6 1 -4 1 6 11 16
<strong>Explaination:</strong> The value decreases until it 
is greater than 0. After that it increases 
and stops when it becomes 16 again.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> N = 10
<strong>Output:</strong> 10 5 0 5 10
<strong>Explaination:</strong> It follows the same logic as 
per the above example.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You do not need to read input or print anything. Your task is to complete the function <strong>pattern()</strong> which takes N as input parameters and returns a list containing the pattern.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>4</sup>&nbsp;</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>pattern-printing</code>&nbsp;<code>Recursion</code>&nbsp;<code>Algorithms</code>&nbsp;