// Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).
// You may assume that the intervals were initially sorted according to their start times.

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

bool compare(Interval a, Interval b){
    return a.start < b.start;
}

vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    vector<Interval> result;
    int i;
    intervals.push_back(newInterval);
    sort(intervals.begin(),intervals.end(),compare);
    result.push_back(intervals[0]);
    for(i=1;i<intervals.size();i++){
        if(intervals[i].start <= result.back().end)
            result.back().end = max(intervals[i].end, result.back().end);
        else
            result.push_back(intervals[i]);
    }
    return result;
    
}
