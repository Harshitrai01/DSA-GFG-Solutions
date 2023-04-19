<h2><a href="https://practice.geeksforgeeks.org/problems/x-total-shapes3617/1?page=1&status[]=unsolved&company[]=Amazon&company[]=Microsoft&company[]=Flipkart&company[]=Adobe&company[]=Google&company[]=Samsung&company[]=Accolite&company[]=MakeMyTrip&company[]=Snapdeal&company[]=Zoho&company[]=Paytm&company[]=Goldman%20Sachs&company[]=Morgan%20Stanley&company[]=Walmart&company[]=OYO%20Rooms&company[]=FactSet&company[]=D-E-Shaw&company[]=Ola%20Cabs&company[]=Oracle&company[]=MAQ%20Software&company[]=SAP%20Labs&company[]=VMWare&company[]=Hike&company[]=Facebook&company[]=Qualcomm&company[]=Intuit&company[]=Cisco&company[]=Visa&company[]=Directi&company[]=Linkedin&company[]=Yahoo&company[]=Payu&company[]=Wipro&company[]=Synopsys&company[]=Citrix&company[]=Salesforce&company[]=Codenation&company[]=PayPal&company[]=TCS&company[]=Twitter&company[]=Housing.com&company[]=Atlassian&company[]=Media.net&company[]=Yatra.com&company[]=Nagarro&company[]=Nutanix&company[]=Swiggy&company[]=Accenture&company[]=Grofers&company[]=Myntra&company[]=One97&company[]=InfoEdge&company[]=Expedia&company[]=Infosys&company[]=IBM&company[]=Opera&company[]=Quikr&company[]=Apple&company[]=Arcesium&company[]=Nvidia&company[]=Jabong&company[]=Cognizant&company[]=Bloomberg&company[]=Sapient&company[]=Airtel&company[]=Sprinklr&company[]=DE%20Shaw&company[]=Dell&company[]=HCL&company[]=Intel&company[]=American%20Express&company[]=Zomato&company[]=Intuit%20&company[]=Nagarro%20&company[]=Media.net%20&company[]=Cognizant%20&category[]=DFS&sortBy=accuracy">X Total Shapes</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given&nbsp; a grid of <strong>n</strong>*<strong>m</strong>&nbsp;consisting<strong>&nbsp;</strong>of <strong>O<code>'s</code></strong>&nbsp;and <strong>X<code>'s</code></strong>. The task is to find the number of '<strong>X</strong>' total shapes.<br>
<strong>Note:&nbsp;</strong>'<strong>X</strong>' shape consists of one or more adjacent <strong>X</strong><code>'s</code>&nbsp;(diagonals not included).</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>grid = {{X,O,X},{O,X,O},{X,X,X}}
<strong>Output: </strong>3
<strong>Explanation: 
</strong>The grid is-
<span style="color:#EE82EE"><strong>X</strong></span> O <span style="color:#FF8C00"><strong>X</strong></span>
O <span style="color:#00FF00"><strong>X</strong></span> O
<strong><span style="color:#00FF00">X</span> <span style="color:#00FF00">X</span> <span style="color:#00FF00">X</span>
</strong>So, X with same colour are adjacent to each 
other vertically for horizontally (diagonals 
not included). So, there are 3 different groups 
in the given grid.</span><span style="font-size:18px"><strong>
</strong></span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>grid = {{X,X},{X,X}}
<strong>Output: </strong>1
<strong>Expanation: 
</strong>The grid is- 
<span style="color:#EE82EE"><strong>X</strong></span> <span style="color:#EE82EE"><strong>X</strong></span>
<strong><span style="color:#EE82EE">X</span> <span style="color:#EE82EE">X</span></strong>
So, X with same colour are adjacent to each
other vertically for horizontally (diagonals
not included). So, there is only 1 group
in the given grid.</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Your task is to complete the function <strong>xShape()&nbsp;</strong>which takes grid as input parameter and returns the count of total X shapes.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Compelxity:&nbsp;</strong>O(n*m)<br>
<strong>Expected Space Compelxity:&nbsp;</strong>O(n*m)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ n, m&nbsp;≤ 100</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>DFS</code>&nbsp;<code>Graph</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;