<h2><a href="https://practice.geeksforgeeks.org/problems/word-search/1?page=1&difficulty[]=1&status[]=unsolved&company[]=Amazon&company[]=Microsoft&company[]=Flipkart&company[]=Adobe&company[]=Google&company[]=Samsung&company[]=Accolite&company[]=MakeMyTrip&company[]=Snapdeal&company[]=Zoho&company[]=Paytm&company[]=Goldman%20Sachs&company[]=Morgan%20Stanley&company[]=Walmart&company[]=OYO%20Rooms&company[]=FactSet&company[]=D-E-Shaw&company[]=Ola%20Cabs&company[]=Oracle&company[]=MAQ%20Software&company[]=SAP%20Labs&company[]=Hike&company[]=Facebook&company[]=VMWare&company[]=Qualcomm&company[]=Cisco&company[]=Visa&company[]=Intuit&company[]=Directi&company[]=Linkedin&company[]=Yahoo&company[]=Payu&company[]=Wipro&company[]=Synopsys&company[]=Citrix&company[]=Salesforce&company[]=Codenation&company[]=TCS&company[]=PayPal&company[]=Twitter&company[]=Housing.com&company[]=Media.net&company[]=Yatra.com&company[]=Nagarro&company[]=Nutanix&company[]=Accenture&company[]=Grofers&company[]=Atlassian&company[]=Myntra&company[]=One97&company[]=InfoEdge&company[]=Infosys&company[]=IBM&company[]=Opera&company[]=Quikr&company[]=Apple&company[]=Arcesium&company[]=Nvidia&company[]=Jabong&company[]=Cognizant&company[]=Bloomberg&company[]=Expedia&company[]=Sapient&company[]=Swiggy&company[]=Airtel&company[]=DE%20Shaw&company[]=Dell&company[]=HCL&company[]=Intel&company[]=American%20Express&company[]=Sprinklr&company[]=Zomato&company[]=Intuit%20&company[]=Nagarro%20&company[]=Media.net%20&company[]=Cognizant%20&category[]=Recursion&sortBy=accuracy">Word Search</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a 2D board of letters and a word. Check if the word exists in the board. The word can be constructed from letters of adjacent cells only. ie - horizontal or vertical neighbors. The same letter cell can not be used more than once.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>board = {{a,g,b,c},{q,e,e,l},{g,b,k,s}},
word = "geeks"
<strong>Output: </strong>1
<strong>Explanation: </strong>The board is-
a <span style="color:#FF0000">g</span> b c
q <span style="color:#FF0000">e</span> <span style="color:#FF0000">e</span> l
g b <span style="color:#FF0000">k s
</span></span><span style="font-size:18px">The letters which are used to make the
"geeks" are colored.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>board = {{a,b,c,e},{s,f,c,s},{a,d,e,e}},
word = "sabfs"
<strong>Output: </strong>0
<strong>Explanation: </strong>The board is-
a b c e
s f c s
a d e e
Same letter can not be used twice hence ans is 0</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>isWordExist()&nbsp;</strong>which takes board and word as input parameter and returns boolean value true if word can be found otherwise returns false.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N * M * 4<sup>L</sup>) where N = No. of rows in board, M = No. of columns in board, L = Length of word<br>
<strong>Expected Space Compelxity:&nbsp;</strong>O(L), L is length of word.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N, M ≤ 100<br>
1 ≤ L ≤ N*M</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Intuit</code>&nbsp;<code>Apple</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Recursion</code>&nbsp;<code>DFS</code>&nbsp;<code>Graph</code>&nbsp;<code>Backtracking</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;