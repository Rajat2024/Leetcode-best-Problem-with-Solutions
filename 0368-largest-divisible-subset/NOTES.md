// if a[j] mod a[i] == 0, it means T[j] can form a larger subset by putting a[i] into T[j]
T[i] = 1 + T[j];
parent[i] = j;
if(T[i] > m)
{
m = T[i];
mi = i;
}
}
}
}
vector<int> ret;
for(int i = 0; i < m; ++i)
{
ret.push_back(nums[mi]);
mi = parent[mi];
}
​
// sort(ret.begin(), ret.end()); // if we go by extending larger ends, the largest "answer" element will come first since the candidate element we observe will become larger and larger as i increases in the outermost "for" loop above.
// alternatively, we can sort nums in decreasing order obviously.
return ret;
}
```