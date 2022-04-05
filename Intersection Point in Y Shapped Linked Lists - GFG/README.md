# Intersection Point in Y Shapped Linked Lists
## Medium 
<div class="problem-statement">
                <p><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank"></a></p><div style="margin: 14px 0px !important;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank">             <div class="col-md-12" style="cursor:pointer;background: #EFF8F3 0% 0% no-repeat padding-box; display: flex; align-items: center; position:                 relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: #333"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: transparent 0% 0% no-repeat padding-box;opacity: 1; margin: 0 16px;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true"></i> </div></a></div><p><span style="font-size:18px">Given two singly linked lists of size <strong>N</strong> and <strong>M, </strong>write a program to get the point where two linked lists intersect each other.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong><strong>
</strong>LinkList1 = 3-&gt;6-&gt;9-&gt;common
LinkList2 = 10-&gt;common
common = 15-&gt;30-&gt;NULL
<strong>Output: 1</strong>5
<strong>Explanation:
</strong><img alt="Y ShapedLinked List" class="aligncenter size-full wp-image-2753 img-responsive" src="https://contribute.geeksforgeeks.org/wp-content/uploads/linked.jpg" style="height:334px; width:388px" title="Y ShapedLinked List"></span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: 
</strong>Linked List 1 = 4-&gt;1-&gt;common
Linked List 2 = 5-&gt;6-&gt;1-&gt;common
common = 8-&gt;4-&gt;5-&gt;NULL
<strong>Output: </strong>8
<strong>Explanation: </strong></span>

<span style="font-size:18px"><strong>4              5</strong></span>
<span style="font-size:18px"><strong>|              |</strong></span>
<span style="font-size:18px"><strong>1              6
</strong></span><span style="font-size:18px"><strong> \             /</strong></span>
<span style="font-size:18px"><strong>  8   -----  1 </strong></span>
   <strong>|</strong>
   <strong>4</strong>
   <strong>|
</strong><span style="font-size:18px"><strong>  5</strong></span>
<span style="font-size:18px"><strong>  |</strong></span>
<span style="font-size:18px"><strong>  NULL       </strong></span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. The task is to complete the function <strong>intersetPoint</strong>() which takes the pointer to the head of linklist1(<strong>head1</strong>) and linklist2(<strong>head2</strong>) as input parameters and&nbsp;returns data value of a node where two linked lists intersect. If linked list do not merge at any point, then it should&nbsp;return <strong>-1</strong>.</span><br>
<span style="font-size:18px"><strong>Challenge </strong>: Try to solve the problem without using any extra space.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N+M)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N + M ≤&nbsp;2*10<sup>5</sup><br>
-1000&nbsp;≤&nbsp;value ≤&nbsp;1000</span></p>

<p>&nbsp;</p>
 <p></p>
            </div>