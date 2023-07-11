/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    var val=init;
    nums.forEach((value,index)=>{
        val=fn(val,value);
    })
    return val;
};