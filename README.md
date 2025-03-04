# ORDER PLANNING
 This C++ program simulates the order planning process for a company with a warehouse that holds 1000 products. The company has 10 dealers, each placing an order with quantities ranging from 0 to 100. The program handles the following tasks step-by-step:

Objective

Order Storage and Recording:

The program will store the details of the dealers' orders, including their addresses and the quantity of products requested, into a file called siparisler.txt.

Randomized Dealer Visiting Sequence:

The company will visit the dealers in a randomized order. The program will generate a random visiting sequence for the dealers.

Display and Save the Order Sequence:

The program will display the list of dealers in the randomized order, showing their addresses and requested quantities.
The final sequence will also be saved back into the orders.txt file.

Order Fulfillment and Remaining Stock:

The program will calculate the total quantity of all orders combined, subtract this from the total warehouse stock, and output both the total amount of products delivered and the remaining stock.
The remaining stock will also be recorded in the orders.txt file.

Instructions

Input Data:

10 dealers are simulated, each of which has an address and a randomly generated product demand between 0 and 100.

File:

orders.txt will store the initial orders, as well as the results of the randomized order delivery sequence and the remaining stock.

Program Execution:

When the program is run, the following steps will be executed:

Randomly generate 10 dealer addresses and their corresponding order quantities (between 0-100).
Write the dealer information (address and order) into siparisler.txt.
Generate a random order visiting sequence.
Display the dealer visiting sequence, along with their address and order quantities on the screen.
Write the randomized visiting sequence and quantities back into orders.txt.
Calculate and display the total quantity of products delivered and the remaining stock, both on the screen and in the file.

Output:

The orders.txt file will contain:

The initial order list.
The randomized order visiting sequence.
The remaining stock after fulfilling all orders.

Important Notes:

The program should handle edge cases where the demand exceeds the available stock by ensuring that the remaining stock does not go negative.
The program will make use of pointers to manage dealer addresses, as required by the task.
