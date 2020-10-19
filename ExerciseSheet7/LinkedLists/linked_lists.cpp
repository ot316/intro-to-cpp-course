/* Program 7.5.1 from C++ Programming Lecture notes  */

/* Author: Rob Miller and William Knottenbelt
   Program last changed: 28th September 2013    */

/* This program creates and prints out a linked list of strings. */ 

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

const int MAX_WORD_LENGTH = 80;

/* definition of a node */
struct Node;
typedef Node *Node_ptr;

struct Node
{
	char word[MAX_WORD_LENGTH];
	Node_ptr ptr_to_next_node;
};

void add_after(Node_ptr &list, char a_word[], char word_after[]);

void delete_node(Node_ptr &a_list, char a_word[]);

void list_selection_sort(Node_ptr &a_list);

Node_ptr minimum_from(Node_ptr current_node);

bool is_alphabetical(char first[], char second[]);

void swap(char first[], char second[]);

void print_list_forwards(Node_ptr list);

void print_list_backwards(Node_ptr list);

void print_list_backwards_iterative(Node_ptr list);

/* Function to assign a linked list to "a_node" */
void assign_list(Node_ptr &a_list);

/* Function to assign a new dynamic node variable to "a_node" */
void assign_new_node(Node_ptr &a_node);

/* Function to print the strings in the list "a_node" */
void print_list(Node_ptr a_node);

/* MAIN PROGRAM */
int main()
{
	Node_ptr my_list = NULL;

	assign_list(my_list);

	cout << "\nTHE LIST IS NOW:\n";
	print_list(my_list);
	
	char a_word[MAX_WORD_LENGTH];
	char word_after[MAX_WORD_LENGTH];
	char delete_word[MAX_WORD_LENGTH];
	//cout << "AFTER WHICH WORD WOULD YOU LIKE TO ADD AN EXTRA WORD? ";
	//cin >> a_word;
	//cout << endl;
	//cout << "WHICH WORD WOULD YOU LIKE TO ADD? ";
	//cin >> word_after;
	//cout << endl;
	//add_after(my_list, a_word, word_after);
	//cout << "\nTHE LIST IS NOW:\n";
	//print_list(my_list);
	//cout << "WHICH WORD WOULD YOU LIKE TO DELETE? ";
	//cin >> delete_word;
	//delete_node(my_list, delete_word);
	//print_list(my_list);
	//list_selection_sort(my_list);
	//cout << "AFTER SORTING, THE LIST IS: ";
	cout << "The list forwards is\n";
	print_list_forwards(my_list);
	cout << endl;
	cout << "The list backwards is\n";
	print_list_backwards_iterative(my_list);
	cout << endl;
	return 0;
}
/* END OF MAIN PROGRAM */

void print_list_forwards(Node_ptr list)
{
	if (list != NULL)
	{
		cout << list->word << " ";
		print_list_forwards(list->ptr_to_next_node);

	}
}
void print_list_backwards(Node_ptr list)
{
	if (list != NULL)
	{
		print_list_backwards(list->ptr_to_next_node);
		cout << list->word << " ";
	}
}


void print_list_backwards_iterative(Node_ptr list)
{
	int count = 0;
	Node_ptr  iterator_node = list;
	while (iterator_node != NULL)
	{
		iterator_node = iterator_node->ptr_to_next_node;
		count++;
	}
	iterator_node = list;
	for (int i = count; i > 0; i--)
	{
		for (int j = 1; j < i; j++)
		{
			iterator_node = iterator_node->ptr_to_next_node;
		}
		cout << iterator_node->word  << " ";
		iterator_node = list;
	}
}

/* DEFINITION OF FUNCTION "assign_list" */
void assign_list(Node_ptr &a_list)
	{
	Node_ptr current_node, last_node;

	assign_new_node(a_list);
	cout << "Enter first word (or '.' to end list): ";
	cin >> a_list->word;
	if (!strcmp(".",a_list->word))
	{
		delete a_list;
		a_list = NULL;
	}
	current_node = a_list;

	while (current_node != NULL)
	{
		assign_new_node(last_node);
		cout << "Enter next word (or '.' to end list): ";
		cin >> last_node->word;
		if (!strcmp(".",last_node->word))
		{
			delete last_node;
			last_node = NULL;
		}
		current_node->ptr_to_next_node = last_node;
		current_node = last_node;
	}
}	
/* END OF FUNCTION DEFINITION */

/* DEFINITION OF FUNCTION "assign_new_node" */
void assign_new_node(Node_ptr &a_node)
{
	a_node = new (nothrow) Node;
	if (a_node == NULL) 
	{
		cout << "sorry - no more memory\n"; 
		exit(1);
	}
}
/* END OF FUNCTION DEFINITION */

/* DEFINITION OF FUNCTION "print_list" */
void print_list(Node_ptr a_node)
{
	while (a_node != NULL)
	{
		cout << a_node->word << " ";
		a_node = a_node->ptr_to_next_node;
	}
	cout << endl;
}

/* DEFINITION OF FUNCTION "add_after" */
void add_after(Node_ptr &list, char a_word[], char word_after[])
{
	Node_ptr current_node, insert_node;
	
	current_node = list;

	while (strcmp(a_word, current_node->word))
	{
		current_node = current_node->ptr_to_next_node;
		if (current_node == NULL)
			return;
	}		
	assign_new_node(insert_node);
	strcpy(insert_node->word, word_after);
	insert_node->ptr_to_next_node = current_node->ptr_to_next_node;
	current_node->ptr_to_next_node = insert_node;
}
/* END OF FUNCTION DEFINITION */


void delete_node(Node_ptr &a_list, char a_word[])
{
	Node_ptr current_node, last_node;

	current_node = a_list;

	while (strcmp(a_word, current_node->word))
	{
	    last_node = current_node;
		current_node  = current_node->ptr_to_next_node;
		if (current_node == NULL)
			return;
	}
	last_node->ptr_to_next_node = current_node->ptr_to_next_node;
	delete current_node;
}

void list_selection_sort(Node_ptr &a_list)
{
	Node_ptr current_node = a_list;
	Node_ptr smallest_node;
	while (current_node != NULL)
	{
		smallest_node = minimum_from(current_node);
		swap(current_node->word, smallest_node->word);
		current_node = current_node->ptr_to_next_node;
	}	
}

Node_ptr minimum_from(Node_ptr current_node)
{
	Node_ptr iterator_node = current_node->ptr_to_next_node;
	Node_ptr smallest_node = current_node;

	while (iterator_node != NULL)
	{
		if (is_alphabetical(iterator_node->word, smallest_node->word))
			smallest_node = iterator_node;
		iterator_node = iterator_node->ptr_to_next_node;
	}
	return smallest_node;
}

bool is_alphabetical(char first[], char second[])
{
	int count = 0;
	
	while (first[count] != '\0' && second[count] != '\0')
	{
		if (first[count] < second[count])
			return true;
		if (first[count] > second[count])
			return false;
		count++;
	}
	
	if (first[count] == '\0' && second[count] != '\0')
		return true;
	else
		return false;
}

void swap(char first[], char second[])
{
	char temp[MAX_WORD_LENGTH]; 
	strcpy(temp, first);
	strcpy(first, second);
	strcpy(second, temp);
}
