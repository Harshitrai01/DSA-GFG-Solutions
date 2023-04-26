<h2><a href="https://practice.geeksforgeeks.org/problems/hamiltonian-path2522/1?page=1&status[]=unsolved&company[]=Amazon&company[]=Microsoft&company[]=Flipkart&company[]=Adobe&company[]=Google&company[]=Samsung&company[]=Accolite&company[]=MakeMyTrip&company[]=Snapdeal&company[]=Zoho&company[]=Paytm&company[]=Goldman%20Sachs&company[]=Morgan%20Stanley&company[]=Walmart&company[]=OYO%20Rooms&company[]=FactSet&company[]=D-E-Shaw&company[]=Ola%20Cabs&company[]=Oracle&company[]=MAQ%20Software&company[]=SAP%20Labs&company[]=VMWare&company[]=Hike&company[]=Facebook&company[]=Qualcomm&company[]=Intuit&company[]=Cisco&company[]=Visa&company[]=Directi&company[]=Linkedin&company[]=Yahoo&company[]=Payu&company[]=Wipro&company[]=Synopsys&company[]=Citrix&company[]=Salesforce&company[]=Codenation&company[]=PayPal&company[]=TCS&company[]=Twitter&company[]=Housing.com&company[]=Atlassian&company[]=Media.net&company[]=Yatra.com&company[]=Nagarro&company[]=Nutanix&company[]=Swiggy&company[]=Accenture&company[]=Grofers&company[]=Myntra&company[]=One97&company[]=InfoEdge&company[]=Expedia&company[]=Infosys&company[]=IBM&company[]=Opera&company[]=Quikr&company[]=Apple&company[]=Arcesium&company[]=Nvidia&company[]=Jabong&company[]=Cognizant&company[]=Bloomberg&company[]=Sapient&company[]=Airtel&company[]=Sprinklr&company[]=DE%20Shaw&company[]=Dell&company[]=HCL&company[]=Intel&company[]=American%20Express&company[]=Zomato&company[]=Intuit%20&company[]=Nagarro%20&company[]=Media.net%20&company[]=Cognizant%20&category[]=DFS&sortBy=submissions">Hamiltonian Path</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">A <a href="https://en.wikipedia.org/wiki/Hamiltonian_path">Hamiltonian path</a>,&nbsp;is a path&nbsp;in an <strong>undirected graph</strong> that visits each vertex exactly once. Given an <strong>undirected&nbsp;graph,</strong>&nbsp;the task is to&nbsp;check if a Hamiltonian path&nbsp;is present in it or not.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4, M = 4
Edges[][]= { {1,2}, {2,3}, {3,4}, {2,4} }
<strong>Output:</strong>
1 
<strong>Explanation: </strong>
There is a hamiltonian path: 
1 -&gt; 2 -&gt; 3 -&gt; 4 </span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4, M = 3 
Edges[][] = { {1,2}, {2,3}, {2,4} } 
<strong>Output: </strong>
0 
<strong>Explanation:</strong> 
It can be proved that there is no 
hamiltonian path in the given graph</span>
</pre>

<p><span style="font-size:18px"><strong>Your task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>check</strong>() which takes the <strong>N&nbsp;</strong>(the number of vertices), <strong>M</strong> (Number of edges) and the list of&nbsp;<strong>Edges</strong>[][] (where Edges[i] denotes the <strong>undirected</strong> Edge between vertices <strong>Edge[i][0] and Edges[i][1]</strong> )&nbsp;as input parameter&nbsp;and returns <strong>true (boolean value)</strong> if the graph contains Hamiltonian path,otherwise returns <strong>false</strong>.&nbsp;</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N!)</span><span style="font-size:18px">.</span><br>
<strong><span style="font-size:18px">Expected Auxiliary Space:</span>&nbsp;</strong><span style="font-size:18px">O(N+M).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 ≤ N ≤ 10</span><br>
<span style="font-size:18px">1 ≤ M ≤ 15</span><br>
<span style="font-size:18px">Size of Edges[i] is&nbsp;2</span><br>
<span style="font-size:18px">1 ≤ Edges[i][0],Edges[i][1] ≤ N</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>DFS</code>&nbsp;<code>Graph</code>&nbsp;<code>Backtracking</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;