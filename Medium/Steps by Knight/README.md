<h2><a href="https://practice.geeksforgeeks.org/problems/steps-by-knight5927/1?page=1&status[]=unsolved&company[]=Amazon&company[]=Microsoft&company[]=Flipkart&company[]=Adobe&company[]=Google&company[]=Samsung&company[]=Accolite&company[]=MakeMyTrip&company[]=Snapdeal&company[]=Zoho&company[]=Paytm&company[]=Goldman%20Sachs&company[]=Morgan%20Stanley&company[]=Walmart&company[]=OYO%20Rooms&company[]=FactSet&company[]=D-E-Shaw&company[]=Ola%20Cabs&company[]=Oracle&company[]=MAQ%20Software&company[]=SAP%20Labs&company[]=VMWare&company[]=Hike&company[]=Facebook&company[]=Qualcomm&company[]=Intuit&company[]=Cisco&company[]=Visa&company[]=Directi&company[]=Linkedin&company[]=Yahoo&company[]=Payu&company[]=Wipro&company[]=Synopsys&company[]=Citrix&company[]=Salesforce&company[]=Codenation&company[]=PayPal&company[]=TCS&company[]=Twitter&company[]=Media.net&company[]=Housing.com&company[]=Atlassian&company[]=Yatra.com&company[]=Nutanix&company[]=Nagarro&company[]=Swiggy&company[]=Accenture&company[]=Grofers&company[]=Myntra&company[]=One97&company[]=InfoEdge&company[]=Expedia&company[]=Infosys&company[]=IBM&company[]=Opera&company[]=Quikr&company[]=Apple&company[]=Arcesium&company[]=Nvidia&company[]=Jabong&company[]=Bloomberg&company[]=Cognizant&company[]=Sapient&company[]=Airtel&company[]=Sprinklr&company[]=DE%20Shaw&company[]=Dell&company[]=HCL&company[]=Intel&company[]=Zomato&company[]=American%20Express&company[]=Intuit%20&company[]=Nagarro%20&company[]=Media.net%20&company[]=Cognizant%20&category[]=BFS&sortBy=difficulty">Steps by Knight</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a square chessboard, the initial position of Knight and position of a target. Find out the minimum steps a Knight will take to reach the target position.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong><br>
The initial and the target position coordinates of&nbsp;Knight have been given according to 1-base indexing.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=6
knightPos[ ] = {4, 5}
targetPos[ ] = {1, 1}</span>
<span style="font-size:18px"><strong>Output:</strong>
3</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<img src="https://media.geeksforgeeks.org/wp-content/uploads/KnightChess.jpg">
<span style="font-size:18px">Knight takes 3 step to reach from 
(4, 5) to (1, 1):
(4, 5) -&gt; (5, 3) -&gt; (3, 2) -&gt; (1, 1).</span></pre>

<p>&nbsp;</p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>minStepToReachTarget()</strong>&nbsp;which takes the initial position of Knight (KnightPos), the target position of Knight (TargetPos), and the size of the chessboard (N) as input parameters and returns the minimum number of steps required by the knight to reach from its current position to the given target position or return -1 if its not possible.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N<sup>2</sup>).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N<sup>2</sup>).</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 1000<br>
1 &lt;= Knight_pos(X, Y), Targer_pos(X, Y)&nbsp;&lt;= N</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<code>Goldman Sachs</code>&nbsp;<code>Intuit</code>&nbsp;<code>Linkedin</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Graph</code>&nbsp;<code>Queue</code>&nbsp;<code>BFS</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;