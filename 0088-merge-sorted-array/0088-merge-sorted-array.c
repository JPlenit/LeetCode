void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int c1 = m - 1, c2 = n - 1;

    if (c2 == -1) return;
    else if (c1 == -1) {
	    for (int i = 0; i < n; i++) nums1[i] = nums2[i];
	    return;
    }

    for (int i = m + n - 1; i >= 0; i--) {
	    if (c1 >= 0 && (c2 < 0 || nums1[c1] > nums2[c2])) {
		    nums1[i] = nums1[c1--];
    	}
	    else {
		    nums1[i] = nums2[c2--];
	    }
    }
}