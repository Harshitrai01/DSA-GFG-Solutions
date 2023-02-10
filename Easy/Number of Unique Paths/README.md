<h2><a href="https://practice.geeksforgeeks.org/problems/number-of-unique-paths5339/1?page=1&difficulty[]=0&status[]=unsolved&company[]=Amazon&company[]=Microsoft&company[]=Flipkart&company[]=Adobe&company[]=Google&company[]=Samsung&company[]=Accolite&company[]=MakeMyTrip&company[]=Snapdeal&company[]=Zoho&company[]=Paytm&company[]=Goldman%20Sachs&company[]=Morgan%20Stanley&company[]=Walmart&company[]=OYO%20Rooms&company[]=FactSet&company[]=D-E-Shaw&company[]=Ola%20Cabs&company[]=Oracle&company[]=MAQ%20Software&company[]=SAP%20Labs&company[]=Hike&company[]=Facebook&company[]=VMWare&company[]=Qualcomm&company[]=Cisco&company[]=Visa&company[]=Intuit&company[]=Directi&company[]=Linkedin&company[]=Yahoo&company[]=Payu&company[]=Wipro&company[]=Synopsys&company[]=Citrix&company[]=Salesforce&company[]=Codenation&company[]=TCS&company[]=PayPal&company[]=Twitter&company[]=Housing.com&company[]=Media.net&company[]=Yatra.com&company[]=Nagarro&company[]=Nutanix&company[]=Accenture&company[]=Grofers&company[]=Atlassian&company[]=Myntra&company[]=One97&company[]=InfoEdge&company[]=Infosys&company[]=IBM&company[]=Opera&company[]=Quikr&company[]=Apple&company[]=Arcesium&company[]=Nvidia&company[]=Jabong&company[]=Cognizant&company[]=Bloomberg&company[]=Expedia&company[]=Sapient&company[]=Swiggy&company[]=Airtel&company[]=DE%20Shaw&company[]=Dell&company[]=HCL&company[]=Intel&company[]=American%20Express&company[]=Sprinklr&company[]=Zomato&company[]=Intuit%20&company[]=Nagarro%20&company[]=Media.net%20&company[]=Cognizant%20&category[]=Dynamic%20Programming&sortBy=accuracy">Number of Unique Paths</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a <strong>A&nbsp;X B</strong> matrix with your initial position at the top-left cell, find the number of possible unique paths to reach the bottom-right cell of the matrix from the initial position.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong> Possible moves can be either <strong>down </strong>or <strong>right </strong>at any point in time, i.e., we can move to matrix[i+1][j] or matrix[i][j+1] from matrix[i][j].</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>A = 2, B = 2
<strong>Output: </strong>2<strong>
Explanation:</strong> There are only two unique
paths to reach the end of the matrix of
size two from the starting cell of the
matrix.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>A = 3, B = 4
<strong>Output: </strong>10<strong>
Explanation:</strong> There are only 10 unique
paths to reach the end of the matrix of
size two from the starting cell of the
matrix.</span></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">Complete <strong>NumberOfPath()&nbsp;</strong>function which takes 2 arguments(A and B) and returns the number of unique paths from top-left to the bottom-right cell.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(A*B).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(A*B).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 ≤ A ≤ 15<br>
1 ≤ B ≤ 15</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Walmart</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;