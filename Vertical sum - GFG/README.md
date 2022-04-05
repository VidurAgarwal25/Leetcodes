# Vertical sum
## Easy 
<div class="problem-statement">
                <p><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank"></a></p><div style="margin: 14px 0px !important;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank">             <div class="col-md-12" style="cursor:pointer;background: #EFF8F3 0% 0% no-repeat padding-box; display: flex; align-items: center; position:                 relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: #333"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: transparent 0% 0% no-repeat padding-box;opacity: 1; margin: 0 16px;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true"></i> </div></a></div><p><span style="font-size:18px">Given a Binary Tree, find vertical sum of the nodes that are in same vertical line. Print all sums through different vertical lines starting from left-most vertical line to right-most vertical line.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
     <span style="font-size:18px">  1
    /   \
  2      3
 / \    / \
4   5  6   7
<strong>Output: 
Explanation:</strong></span>
<span style="font-size:18px">The tree has 5 vertical lines
Vertical-Line-1 has only one node
4 =&gt; vertical sum is 4
Vertical-Line-2: has only one node
2=&gt; vertical sum is 2
Vertical-Line-3: has three nodes:
1,5,6 =&gt; vertical sum is 1+5+6 = 12
Vertical-Line-4: has only one node 3
=&gt; vertical sum is 3
Vertical-Line-5: has only one node 7
=&gt; vertical sum is 7</span>
</pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You don't need to take input. Just complete the function<strong>&nbsp;verticalSum()&nbsp;</strong>that takes <strong>root </strong>node of the tree<strong>&nbsp;</strong>as parameter and returns an array containing&nbsp;the vertical sum of tree from left to right.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>: O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=Number of nodes&lt;=1000</span></p>
 <p></p>
            </div>