def clear():
    print("\n" *  100)
    
while True:
  choice = input("(Player 1) - Enter rock, paper, or scissors: ")
  clear()
  choice2 = input("(Player 2) - Enter rock, paper, or scissors: ")
  clear()
  choice = choice.lower()
  choice2 = choice2.lower()

  #Rock first
  if choice == "rock" and choice2 == "rock":
    print("You both picked rock. Try again!")
  if choice == "rock" and choice2 == "paper":
    print("Player 2 wins!")
  if choice == "rock" and choice2 == "scissors":
    print("Player 1 wins!")
  if choice == "paper" and choice2 == "rock":
    print("Player 1 wins!")
  if choice == "scissors" and choice2 == "rock":
    print("Player 2 wins!")
  if choice == "paper" and choice2 == "paper":
    print("You both picked paper. Try again!")
  if choice == "scissors" and choice2 == "scissors":
    print("You both picked scissors. Try again!")
  if choice == "paper" and choice2 == "scissors":
    print("Player 2 wins!")
  if choice == "scissors" and choice2 == "paper":
    print("Player 1 wins!")
  if choice == "gun" and choice2 == "rock":
    print("Player 1 shoots a rock. They... win..?")
  if choice == "gun" and choice2 == "paper":
    print("Player 1 shoots a piece of paper. It kills player 2. Player 1 wins")
  if choice == "gun" and choice2 == "scissors":
    print("Player 1 shoots a safety scissor. After using 25 mags, you hit it. Player 1 wins")
  if choice == "rock" and choice2 == "gun":
    print("Player 2 shoots a rock. They... win..?")
  if choice == "scissor" and choice2 == "gun":
     print("Player 2 shoots a safety scissor. After using 25 mags, you hit it. Player 2 wins")
  if choice == "paper" and choice2 == "gun":
    print("Player 1 shoots a piece of paper. It kills player 2. Player 1 wins")
  if choice == "gun" and choice2 == "gun":
    print("You both shot each other. No one wins.")
  else:
    print("------------------------------------------------")
  