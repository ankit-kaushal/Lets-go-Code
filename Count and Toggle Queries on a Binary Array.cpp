// C++ program to implement toggle and count
// queries on a binary array.
#include<bits/stdc++.h>
using namespace std;
const int MAX = 100000;

// segment tree to store count of 1's within range
int tree[MAX] = {0};

// bool type tree to collect the updates for toggling
// the values of 1 and 0 in given range
bool lazy[MAX] = {false};

// function for collecting updates of toggling
// node --> index of current node in segment tree
// st --> starting index of current node
// en --> ending index of current node
// us --> starting index of range update query
// ue --> ending index of range update query
void toggle(int node, int st, int en, int us, int ue)
{
	// If lazy value is non-zero for current node of segment
	// tree, then there are some pending updates. So we need
	// to make sure that the pending updates are done before
	// making new updates. Because this value may be used by
	// parent after recursive calls (See last line of this
	// function)
	if (lazy[node])
	{
		// Make pending updates using value stored in lazy nodes
		lazy[node] = false;
		tree[node] = en - st + 1 - tree[node];

		// checking if it is not leaf node because if
		// it is leaf node then we cannot go further
		if (st < en)
		{
			// We can postpone updating children we don't
			// need their new values now.
			// Since we are not yet updating children of 'node',
			// we need to set lazy flags for the children
			lazy[node<<1] = !lazy[node<<1];
			lazy[1+(node<<1)] = !lazy[1+(node<<1)];
		}
	}

	// out of range
	if (st>en || us > en || ue < st)
		return ;

	// Current segment is fully in range
	if (us<=st && en<=ue)
	{
		// Add the difference to current node
		tree[node] = en-st+1 - tree[node];

		// same logic for checking leaf node or not
		if (st < en)
		{
			// This is where we store values in lazy nodes,
			// rather than updating the segment tree itelf
			// Since we don't need these updated values now
			// we postpone updates by storing values in lazy[]
			lazy[node<<1] = !lazy[node<<1];
			lazy[1+(node<<1)] = !lazy[1+(node<<1)];
		}
		return;
	}

	// If not completely in rang, but overlaps, recur for
	// children,
	int mid = (st+en)/2;
	toggle((node<<1), st, mid, us, ue);
	toggle((node<<1)+1, mid+1,en, us, ue);

	// And use the result of children calls to update this node
	if (st < en)
		tree[node] = tree[node<<1] + tree[(node<<1)+1];
}

/* node --> Index of current node in the segment tree.
		Initially 0 is passed as root is always at'
		index 0
st & en --> Starting and ending indexes of the
				segment represented by current node,
				i.e., tree[node]
qs & qe --> Starting and ending indexes of query
				range */
// function to count number of 1's within given range
int countQuery(int node, int st, int en, int qs, int qe)
{
	// current node is out of range
	if (st>en || qs > en || qe < st)
		return 0;

	// If lazy flag is set for current node of segment tree,
	// then there are some pending updates. So we need to
	// make sure that the pending updates are done before
	// processing the sub sum query
	if (lazy[node])
	{
		// Make pending updates to this node. Note that this
		// node represents sum of elements in arr[st..en] and
		// all these elements must be increased by lazy[node]
		lazy[node] = false;
		tree[node] = en-st+1-tree[node];

		// checking if it is not leaf node because if
		// it is leaf node then we cannot go further
		if (st<en)
		{
			// Since we are not yet updating children os si,
			// we need to set lazy values for the children
			lazy[node<<1] = !lazy[node<<1];
			lazy[(node<<1)+1] = !lazy[(node<<1)+1];
		}
	}

	// At this point we are sure that pending lazy updates
	// are done for current node. So we can return value
	// If this segment lies in range
	if (qs<=st && en<=qe)
		return tree[node];

	// If a part of this segment overlaps with the given range
	int mid = (st+en)/2;
	return countQuery((node<<1), st, mid, qs, qe) +
		countQuery((node<<1)+1, mid+1, en, qs, qe);
}

// Driver program to run the case
int main()
{
	int n = 5;
	toggle(1, 0, n-1, 1, 2); // Toggle 1 2
	toggle(1, 0, n-1, 2, 4); // Toggle 2 4

	cout << countQuery(1, 0, n-1, 2, 3) << endl; // Count 2 3

	toggle(1, 0, n-1, 2, 4); // Toggle 2 4

	cout << countQuery(1, 0, n-1, 1, 4) << endl; // Count 1 4

return 0;
}
