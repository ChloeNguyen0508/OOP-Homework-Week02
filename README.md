# OOP-Homework-Week02


# Vehicle Management Program  

## 📌 Introduction  
This program was built to manage and display the basic attributes of a vehicle.  
It includes information such as:  
- Brand  
- Model  
- Year of manufacture  
- Color  
- Maximum speed  
- Current speed  
- Price  
- Fuel type  

The program demonstrates the application of Object-Oriented Programming (OOP) concepts such as **encapsulation, constructors, and methods** to create a simple but extensible system.  
It also allows users to enter additional vehicles via keyboard input.  

---

## 📝 Reflection on the Implementation Process  

From the requirements of the assignment, I analyzed that the main goal was to build a simple system to manage and display the basic attributes of vehicles.  
This serves as a starting point for imagining how a transport company might track information about different types of vehicles.  

I identified important attributes such as brand, model, year of manufacture, color, maximum speed, current speed, price, and fuel type. Then, I designed the `Vehicle` class with a constructor, setters, getters, and supporting methods like displaying information and accelerating.  

### 🔹 Challenges  
- **Speed checking**:  
  Initially, I wrote a separate function to check the vehicle’s speed instead of including it directly in the constructor.  
  However, during testing, this approach caused all vehicles to be assigned a default maximum speed of 200 km/h, which did not meet the requirements.  
  Therefore, I revised the design and integrated the speed-checking logic directly into the constructor, ensuring that both the maximum and current speeds of each vehicle are handled correctly at initialization.  

- **User input for new vehicles**:  
  Enabling user input was another challenge. With the help of ChatGPT, I was able to simplify the code, avoiding redundancy and potential errors when handling string input from the keyboard.  

### 🔹 Key OOP Concepts Applied  
- **Encapsulation**: Keeping attributes private while providing setters/getters.  
- **Constructors**: Simplifying object creation with automatic attribute initialization.  
- **Extensibility**: The system can easily be expanded to manage more types of vehicles in the future.  

---

✅ Overall, this project helped me understand how to structure a small OOP-based program, handle common pitfalls (like default values), and improve code readability through proper design.  
