/* https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/#  */ 

int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        
        /* case 1: rectangles are left of one another
           case 2: rectangles are up and down of another */
        
        if(L1[0]>R2[0]||L2[0]>R1[0]||R1[1]>L2[1]||R2[1]>L1[1]) //in this cases rect never overlap
            return 0;
        
        return 1;
    }
