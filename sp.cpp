def calculate_markup(merchandise_cost, employee_salary, yearly_rent, electricity_cost, desired_profit):
    # Calculate total expenses
    total_expenses = merchandise_cost + employee_salary + yearly_rent + electricity_cost
    
    # Calculate the amount needed for desired profit
    profit_amount = total_expenses * desired_profit
    
    # Calculate the total revenue needed
    total_revenue = total_expenses + profit_amount
    
    # Calculate the revenue after discount
    revenue_after_discount = total_revenue / 0.85
    
    # Calculate the markup percentage
    markup_percentage = (revenue_after_discount - merchandise_cost) / merchandise_cost * 100
    
    return markup_percentage

# Input values
merchandise_cost = float(input("Enter the total cost of the merchandise: "))
employee_salary = float(input("Enter the yearly salary of the employees (including yours): "))
yearly_rent = float(input("Enter the yearly rent: "))
electricity_cost = float(input("Enter the estimated electricity cost: "))
desired_profit = 0.10  # 10% desired profit

# Calculate and print the markup percentage
markup_percentage = calculate_markup(merchandise_cost, employee_salary, yearly_rent, electricity_cost, desired_profit)
print(f"The merchandise should be marked up by approximately {markup_percentage:.2f}%")
