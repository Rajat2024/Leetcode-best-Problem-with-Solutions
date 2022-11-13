class MedianFinder
{
    public:
        priority_queue<int> small;
    priority_queue<int, vector < int>, greater < int>> large;
    MedianFinder() {}

    void addNum(int num)
    {

        if (small.size() == 0 || small.top() >= num)
            small.push(num);
        else
            large.push(num);

        if (small.size() > (large.size() + 1))
        {
            large.push(small.top());
            small.pop();
        }
        else
        if (large.size() > small.size())
        {
            small.push(large.top());
            large.pop();
        }
    }

    double findMedian()
    {
        if (large.size() == small.size())
            return large.top() / 2.0 + small.top() / 2.0;
        else
            return small.top() *1.0;
    }
};

/**
 *Your MedianFinder object will be instantiated and called as such:
 *MedianFinder* obj = new MedianFinder();
 *obj->addNum(num);
 *double param_2 = obj->findMedian();
 */