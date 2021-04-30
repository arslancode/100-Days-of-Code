using System;
//ATM project using programming fundamentals
namespace Digital_ATM
{
    class Program
    {
        public static string registerationChoiceString, email, username, password, phoneNo, twoFactor;
        public static string loginUsername, loginPassword;
        public static bool loginSuccess = false, registerationSuccess = false, tryParsingSuccess = false, withdrawalSuccess = false, depositSuccesss = false, mainmenuParse = false;
        public static int registerationChoice, balance, withdrawalAmount, depositAmount, mainMenuChoice;
        public static void Login()
        {
            Console.WriteLine("Login Panel");
            Console.WriteLine("Enter your Credentials to log-in your accoount!");
            do
            {
                Console.WriteLine("Username: ");
                loginUsername = Console.ReadLine();
                Console.WriteLine("Password: ");
                loginPassword = Console.ReadLine();
                if (loginUsername.Equals(username) && loginPassword.Equals(password))
                {
                    Console.WriteLine("Login Successfull");
                    loginSuccess = true;
                }
                else
                {
                    Console.WriteLine("Username or Password incorrect please try again!");
                }
            } while (loginSuccess  == false);
        }
        public static void Withdrawal()
        {
            Console.WriteLine("Enter the amount to withdraw: ");
            Console.WriteLine("Your Account Balance: {0}", balance);
            int withdrawRemainder = balance % 500;
            int withdrawableAmount = balance - withdrawRemainder;
            Console.WriteLine("Maximum Withdrawable Amount: {0}", withdrawableAmount);
            do
            {
                Console.WriteLine("Make Sure your entered amount is multiple of 500 and within limits of your withdrawable amount");
                string withdrawalString = Console.ReadLine();
                if (int.TryParse(withdrawalString, out withdrawalAmount))
                {
                    withdrawalAmount = int.Parse(withdrawalString);
                    balance -= withdrawalAmount;
                    Console.WriteLine("Withdrawal Successfull!, Please collect your cash from designated collection point!");
                    Console.WriteLine("Your current account balance is {0}", balance);
                    withdrawalSuccess = true;
                }
                else
                {
                    Console.WriteLine("Invalid input, Use number value to withdraw!");
                }
            } while (withdrawalSuccess == false);
        }
        public static void Deposit()
        {
            Console.WriteLine("Enter the Amount to be deposited: ");
            string depositString = Console.ReadLine();
            do
            {
                if(int.TryParse(depositString, out depositAmount))
                {
                    depositAmount = int.Parse(depositString);
                    balance += depositAmount;
                    Console.WriteLine("Your new account balance is {0}", balance);
                    depositSuccesss = true;
                }
                else
                {
                    Console.WriteLine("Invalid input!, Please Enter a valid numeric amount!"); 
                }
            } while (depositSuccesss == false);
        }
        public static void BalanceInquiry()
        {
            Console.WriteLine("Your current balance is: ");
            var random = new Random();
            balance = random.Next(500,500000);
            Console.WriteLine("RS {0}",balance);
        }
      
        public static void Register()
        {
            Console.WriteLine("Registeration Panel");
            do
            {
                Console.WriteLine("Please Select a Registeration Option:");
                Console.WriteLine("Enter Option number i.e 1 or 2");
                Console.WriteLine("1: Email");
                Console.WriteLine("2: Phone No");
                registerationChoiceString = Console.ReadLine();
                if (int.TryParse(registerationChoiceString, out registerationChoice))
                {
                    registerationChoice = int.Parse(registerationChoiceString);
                    tryParsingSuccess = true;
                }
                else
                {
                    Console.WriteLine("Invalid option entered, Please Enter option number i.e 1, 2 etc");
                }
                if (registerationChoice == 1)
                {
                    Console.WriteLine("Enter Your Credentials to register.");
                    Console.WriteLine("Email: ");
                    email = Console.ReadLine();
                }
                else if (registerationChoice == 2)
                {
                    Console.WriteLine("Enter Your Credentials to register.");
                    Console.WriteLine("Phone No: ");
                    phoneNo = Console.ReadLine();
                }
                else
                {
                    Console.WriteLine("Please choose a valid option number, Re Run the program");
                }
            } while (tryParsingSuccess == false && (registerationChoice == 1 || registerationChoice == 2));
            Console.WriteLine("Username: ");
            username = Console.ReadLine();
            do
            {
                Console.WriteLine("Password: ");
                password = Console.ReadLine();
                if(password.Length >= 8)
                {
                    Console.WriteLine("*****Password Format Correct*****");
                }
                else
                {
                    Console.WriteLine("__________Password less than 8 characters, Please Try again!");
                }
            } while (password.Length < 8);

            Console.WriteLine("Registeration Successful, kindly verfiy your email, phone no using OTP sent.");
            Console.WriteLine("You can now log in your account!");
            registerationSuccess = true;
        }



        

    static void Main(string[] args)
        {
            Register();
            if(registerationSuccess == true)
            {
                Login();
                if(loginSuccess == true)
                {
                    Console.WriteLine("Please Enter the option no: ");
                    Console.WriteLine("1 for Balance Inquiry");
                    Console.WriteLine("2 for Cash Withdrawal");
                    Console.WriteLine("3 for Cash Deposit");
                    Console.WriteLine("4 to Logout");
                    string mainChoiceString = Console.ReadLine();
                    do
                    {
                        if (int.TryParse(mainChoiceString, out mainMenuChoice))
                        {
                            switch (mainMenuChoice)
                            {
                                case 1:
                                    BalanceInquiry();
                                    break;
                                case 2:
                                    Withdrawal();
                                    break;
                                case 3:
                                    Deposit();
                                    break;
                                case 4:
                                    Console.WriteLine("You are Logged out, Re run the program to log in again!");
                                    return;
                                default:
                                    Console.WriteLine("Invalid option selected, Please try again");
                                    break;
                            }
                        }
                    } while (mainmenuParse == false && mainMenuChoice != 4);

                }

            }
            else
            {
                Console.WriteLine("Please Successfully Register First!");
            }
            Console.Read();
        }
    }
}
