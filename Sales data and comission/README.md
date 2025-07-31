# 📊 Sales Data and Commission Report

This C program collects and processes sales data for multiple salespersons and their respective item sales. It calculates the total sales and commissions (10%) for each salesperson based on their input.

---

## 🔧 Features

- Takes user input for number of salespersons and items.
- Records individual sale amounts in a 2D array.
- Calculates total sales per salesperson.
- Calculates 10% commission on total sales.
- Neatly displays all the data in a formatted report.

---

## 🧮 Formula Used

- **Total Sales** = Sum of all item sales for a salesperson.
- **Commission** = 10% of Total Sales  
  `Commission = Total Sales × 0.10`

---

## 🖥️ Sample Output

```
Enter the number of salespersons: 2  
Enter the number of items: 3  
Enter the sale data:  

Sale amount for salesperson number 1 and item number 1 is: 100  
Sale amount for salesperson number 1 and item number 2 is: 200  
Sale amount for salesperson number 1 and item number 3 is: 300  
Sale amount for salesperson number 2 and item number 1 is: 150  
Sale amount for salesperson number 2 and item number 2 is: 250  
Sale amount for salesperson number 2 and item number 3 is: 100  

-------------------  
----SALES DATA----  
-------------------  
Sale data for sales person number 1  
----------------------------------------  
	Item 1: $100.00  
	Item 2: $200.00  
	Item 3: $300.00  
	Total : $600.00  
	Comission : $60.00  

Sale data for sales person number 2  
----------------------------------------  
	Item 1: $150.00  
	Item 2: $250.00  
	Item 3: $100.00  
	Total : $500.00  
	Comission : $50.00  
```

---

## 🛠 How to Compile and Run

Make sure you have a C compiler installed (like `gcc`):

```bash
gcc sales_report.c -o sales_report
./sales_report
```

Replace `sales_report.c` with your actual filename.

---

## ⚠️ Note

Make sure your system supports **Variable Length Arrays (VLA)**, which is a C99 feature. If using older compilers, you may need to use dynamic memory allocation instead of:

```c
double saledata[r][c];
```

---

## 📁 File Structure

```
sales_report.c     // Main program file
README.md          // This documentation
```

---

## ✍️ Author

Darshan7052006  
[GitHub Profile](https://github.com/Darshan7052006)

