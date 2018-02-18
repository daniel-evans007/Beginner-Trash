from random import randint

print ("***BATTLESHIP 1.0***")
print ("\n***INSTRUCTIONS***")
print ("\nGUESS AND ENTER THE ROW AND COLUMN NUMBER OF THE BOARD TO SINK A HIDDEN BATTLESHIP")
print ("\n***ALL THE BEST***\n")

board = []
board1 = []

for x in range(0, 5):
  board.append(["O"] * 5)
  board1.append(["O"] * 5)

def print_board(brd):
  for row in brd:
    print (" ".join(row))

print_board(board)

def random_row(brd):
  return randint(0, len(brd) - 1)

def random_col(brd):
  return randint(0, len(brd) - 1)

ship_row = random_row(board)
ship_col = random_col(board)

for turn in range(4):
  print ("\nTurn", turn + 1)
  guess_row = int(input("Guess Row: "))
  guess_col = int(input("Guess Column: "))

  if (guess_row == ship_row and guess_col == ship_col):
    print ("\nCongratulations! You Sank my Battleship!")
    print ("\nTHANKS FOR PLAYING BATTLESHIP")
    break
  else:
    if (guess_row not in list(range(5)) or guess_col not in list(range(5))):
      print ("\nOops, that's not even in the ocean.\n")
    elif board[guess_row][guess_col] == "X":
      print ( "\nYou guessed that one already!\n" )
    else:
      print ("\nYou missed my Battleship!\n")
      board[guess_row][guess_col] = "X"
    if (turn == 3):
        board1[ship_row][ship_col] = "B"
        print ("\n***GAME OVER***")
        print ("\nThe Battleship was at Coordinates:")
        print ("Row Number: "+str(ship_row))
        print ("Column Number: "+str(ship_col))
        print ("("+str(ship_row)+","+str(ship_col)+")")
        print ("\nThe Position has been Marked with B on the board:\n")
        print_board(board1)
        print ("\n***THANKS FOR PLAYING BATTLESHIP***")
    else:  
        print_board(board)