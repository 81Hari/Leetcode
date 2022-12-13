A peak element is an element that is strictly greater than its neighbors.

<a href="https://leetcode.com/problems/find-peak-element/description/">For More</a>

<h1>Solution</h1>

<ul>
<li>We need to <b>search</b> a element that is strictly greater than its neighbors in O(logn) time.</li>
<li>Search Algorithm that works in logn time is <b>Binary Search</b></li>
</ul>

<pre>
  if arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]:
    return mid
  else if arr[mid]>arr[mid+1]:
    end = mid -1
  else
    beg = mid+1
  
  for above code: we find atleast one element that staisfies the condition 
</pre>
