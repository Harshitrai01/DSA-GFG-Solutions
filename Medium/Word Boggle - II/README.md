<h2><a href="https://practice.geeksforgeeks.org/problems/72cf44eabd18006810efad06fbb623a0682acee2/1?page=1&status[]=unsolved&company[]=Amazon&company[]=Microsoft&company[]=Flipkart&company[]=Adobe&company[]=Google&company[]=Samsung&company[]=Accolite&company[]=MakeMyTrip&company[]=Snapdeal&company[]=Zoho&company[]=Paytm&company[]=Goldman%20Sachs&company[]=Morgan%20Stanley&company[]=Walmart&company[]=OYO%20Rooms&company[]=FactSet&company[]=D-E-Shaw&company[]=Ola%20Cabs&company[]=Oracle&company[]=MAQ%20Software&company[]=SAP%20Labs&company[]=VMWare&company[]=Hike&company[]=Facebook&company[]=Qualcomm&company[]=Intuit&company[]=Cisco&company[]=Visa&company[]=Directi&company[]=Linkedin&company[]=Yahoo&company[]=Payu&company[]=Wipro&company[]=Synopsys&company[]=Citrix&company[]=Salesforce&company[]=Codenation&company[]=PayPal&company[]=TCS&company[]=Twitter&company[]=Housing.com&company[]=Atlassian&company[]=Media.net&company[]=Yatra.com&company[]=Nagarro&company[]=Nutanix&company[]=Swiggy&company[]=Accenture&company[]=Grofers&company[]=Myntra&company[]=One97&company[]=InfoEdge&company[]=Expedia&company[]=Infosys&company[]=IBM&company[]=Opera&company[]=Quikr&company[]=Apple&company[]=Arcesium&company[]=Nvidia&company[]=Jabong&company[]=Cognizant&company[]=Bloomberg&company[]=Sapient&company[]=Airtel&company[]=Sprinklr&company[]=DE%20Shaw&company[]=Dell&company[]=HCL&company[]=Intel&company[]=American%20Express&company[]=Zomato&company[]=Intuit%20&company[]=Nagarro%20&company[]=Media.net%20&company[]=Cognizant%20&category[]=DFS&sortBy=accuracy">Word Boggle - II</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a dictionary of&nbsp;words and an M x N board where every cell has one character. Find all possible different words from the dictionary that can be formed by a sequence of adjacent characters on the board. We can move to any of 8 adjacent characters, but a word should not have multiple instances of the same cell.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: 
</strong>N = 1
dictionary = {"CAT"}
R = 3, C = 3
board = {{C,A,P},{A,N,D},{T,I,E}}
<strong>Output:</strong>
CAT
<strong>Explanation</strong>: 
<span style="color:#800080">C</span> A P
<span style="color:#800080">A</span> N D
<span style="color:#800080">T</span> I E
Words we got is denoted using same color.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4
dictionary = {"GEEKS","FOR","QUIZ","GO"}
R = 3, C = 3 
board = {{G,I,Z},{U,E,K},{Q,S,E}}
<strong>Output:</strong>
GEEKS QUIZ
<strong>Explanation</strong>: 
<span style="color:#FF8C00">G</span> <span style="color:#0000CD">I</span> <span style="color:#0000CD">Z</span>
<span style="color:#0000CD">U</span> <span style="color:#FF8C00">E</span> <span style="color:#FF8C00">K</span>
<span style="color:#0000CD">Q</span> <span style="color:#FF8C00">S</span> <span style="color:#FF8C00">E</span> 
Words we got is denoted using same color.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your task:</strong><br>
You don’t need to read input or print anything. Your task is to complete the function&nbsp;<strong>wordBoggle()</strong>&nbsp;which takes the dictionary contaning N&nbsp;space-separated strings and R*C board </span><span style="font-size:18px">as input parameters and returns a list of&nbsp;words that exist on the board (<strong>NOTE</strong>: All words returned must be different even it occurs multiple times in the dictionary).</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(4^(N^2))<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N^2)</span></p>

<div><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N&nbsp;≤ 15<br>
1 ≤ R, C&nbsp;≤ 50<br>
1 ≤ length of Word&nbsp;≤ 60</span></div>

<div><span style="font-size:18px">All words of Dictionary&nbsp;and all characters of board are in uppercase letters from <strong>'A'</strong> to <strong>'Z'</strong></span></div>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<code>Directi</code>&nbsp;<code>Google</code>&nbsp;<code>Facebook</code>&nbsp;<code>Yahoo</code>&nbsp;<code>Nvidia</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Recursion</code>&nbsp;<code>DFS</code>&nbsp;<code>Graph</code>&nbsp;<code>Trie</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;<code>Advanced Data Structure</code>&nbsp;