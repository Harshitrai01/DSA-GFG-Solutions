<h2><a href="https://practice.geeksforgeeks.org/problems/find-number-of-closed-islands/1?page=1&status[]=unsolved&company[]=Amazon&company[]=Microsoft&company[]=Flipkart&company[]=Adobe&company[]=Google&company[]=Samsung&company[]=Accolite&company[]=MakeMyTrip&company[]=Snapdeal&company[]=Zoho&company[]=Paytm&company[]=Goldman%20Sachs&company[]=Morgan%20Stanley&company[]=Walmart&company[]=OYO%20Rooms&company[]=FactSet&company[]=D-E-Shaw&company[]=Ola%20Cabs&company[]=Oracle&company[]=MAQ%20Software&company[]=SAP%20Labs&company[]=VMWare&company[]=Hike&company[]=Facebook&company[]=Qualcomm&company[]=Intuit&company[]=Cisco&company[]=Visa&company[]=Directi&company[]=Linkedin&company[]=Yahoo&company[]=Payu&company[]=Wipro&company[]=Synopsys&company[]=Citrix&company[]=Salesforce&company[]=Codenation&company[]=PayPal&company[]=TCS&company[]=Twitter&company[]=Housing.com&company[]=Atlassian&company[]=Media.net&company[]=Yatra.com&company[]=Nagarro&company[]=Nutanix&company[]=Swiggy&company[]=Accenture&company[]=Grofers&company[]=Myntra&company[]=One97&company[]=InfoEdge&company[]=Expedia&company[]=Infosys&company[]=IBM&company[]=Opera&company[]=Quikr&company[]=Apple&company[]=Arcesium&company[]=Nvidia&company[]=Jabong&company[]=Cognizant&company[]=Bloomberg&company[]=Sapient&company[]=Airtel&company[]=Sprinklr&company[]=DE%20Shaw&company[]=Dell&company[]=HCL&company[]=Intel&company[]=American%20Express&company[]=Zomato&company[]=Intuit%20&company[]=Nagarro%20&company[]=Media.net%20&company[]=Cognizant%20&category[]=DFS&sortBy=accuracy">Find number of closed islands</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a <a href="https://www.geeksforgeeks.org/program-to-check-if-a-matrix-is-binary-matrix-or-not/">binary matrix</a> <strong>mat[][]</strong> of dimensions <strong>NxM</strong> such that 1 denotes land and <strong>0</strong> denotes water. Find the number of closed islands in the given matrix. </span></p>

<pre><span style="font-size:18px">A closed island is known as the group of <strong>1s</strong>
that is surrounded by only <strong>0s</strong> on all the four
sides (excluding diagonals). If any 1 is at
the edges of the given matrix then it is not
considered as the part of the connected
island as it is not surrounded by all <strong>0's</strong>.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">N = 5, M = 8
mat[][] =</span> <span style="font-size:18px">{{0, 0, 0, 0, 0, 0, 0, 1},&nbsp;
           {0, 1, 1, 1, 1, 0, 0, 1},&nbsp;
           {0, 1, 0, 1, 0, 0, 0, 1},&nbsp;
           {0, 1, 1, 1, 1, 0, 1, 0},&nbsp;
           {0, 0, 0, 0, 0, 0, 0, 1}}</span>
<span style="font-size:18px"><strong>Output:</strong>
2
<strong>Explanation</strong>:
</span><span style="font-size:18px">mat[][] =&nbsp;{{0, 0, 0, 0, 0, 0, 0, 1},&nbsp;
           {0, <strong>1, 1, 1, 1, </strong>0, 0, 1},&nbsp;
           {0, <strong>1</strong>, 0, <strong>1</strong>, 0, 0, 0, 1},&nbsp;
           {0, <strong>1, 1, 1, 1, </strong>0, <strong>1</strong>, 0},&nbsp;
           {0, 0, 0, 0, 0, 0, 0, 1}}&nbsp;
There are 2 closed islands.&nbsp;
The islands in dark are closed because
they are completely surrounded by&nbsp;0s (water).&nbsp;
There are two more islands in the last
column of the matrix, but they are not
completely surrounded by 0s.&nbsp;
Hence they are not closed islands. </span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">N = 3, M = 3
mat[][] = {{1, 0, 0},
           {0, 1, 0},
           {0, 0, 1}}</span>
<span style="font-size:18px"><strong>Output:</strong>
1</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your task:</strong></span><br>
<span style="font-size:18px">You dont need to read input or print anything. Your task is to complete the function <strong>closedIslands()</strong>&nbsp;which takes two integers N and M, and a 2D binary matrix mat as input parameters and returns the number of closed islands.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N*M)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N*M)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N,M ≤ 500</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>DFS</code>&nbsp;<code>Matrix</code>&nbsp;<code>Graph</code>&nbsp;<code>BFS</code>&nbsp;<code>union-find</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;