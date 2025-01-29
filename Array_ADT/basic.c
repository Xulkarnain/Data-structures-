#include <stdio.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

void display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for(i=0; i<arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

void add (struct Array *arr, int x)
{
    int i;
    if(arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
    arr->length++;
 
}

void insert( struct Array * arr , int index, int y)
{
	int i;
	if(arr->length >index)
	{
		for(i=arr->length-1 ; i > index ;i--)
		{
			arr->A[i]=arr->A[i-1];
		}
	        arr->length++;
	        arr->A[index]=y;
    }
}

void delete(struct Array *arr ,int index)
{
	int i;

	if(arr->length > index && index > 0)
	{
		for(i=index ; i <= arr->length-1 ; i++)
		{
			arr->A[i]=arr->A[i+1];
		}
		arr->length--;
	}
}

int Lsearch(struct array *arr , int key)
{
    int i;
    for(i=0 ; i<arr->length ; i++)
    {
        if(key==arr->A[i])
        {
            return i;
        }
    }
    return -1;
}

int Bsearch(struct array *arr , int key)
{
    int l,h,mid;
    l=0;
    h=arr->length-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr->A[mid])
        {
            return mid;
        }
        else if(key<arr->A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return -1;
}

int main()
{
    struct Array arr = {{2,3,4,5,6}, 10, 5};


    add(&arr, 10);

    insert(&arr, 2, 9);

    delete(&arr, 2);

    display(arr);

}