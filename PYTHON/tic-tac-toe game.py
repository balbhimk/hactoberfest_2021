import os
import time
board=[' ',' ',' ',' ',' ',' ',' ',' ',' ',' ']
player=1
win=1
draw=-1
running=0
stop=-1

game=running
mark='x'
print("this game developed by deepakkyatham")
def drawboard():
    print("%c|%c|%c"%(board[1],board[2],board[3]))
    print("%c|%c|%c"%(board[4],board[5],board[6]))
    print("%c|%c|%c"%(board[7],board[8],board[9]))

def position(ch):
    if(board[ch]==' '):
        return True
    else:
        return False

def checkwin():
    global game
    if(board[1]==board[2] and board[2]==board[3] and board[1]!=' '):
        game=win
    elif(board[4]==board[5] and board[5]==board[6] and board[4]!=' '):
        game=win
    elif(board[7]==board[8] and board[8]==board[9] and board[7]!=' '):
        game=win
    elif(board[1]==board[4] and board[4]==board[7] and board[1]!=' '):
        game=win
    elif(board[2]==board[5] and board[5]==board[8] and board[2]!=' '):
        game=win
    elif(board[3]==board[6] and board[6]==board[9] and board[3]!=' '):
        game=win
    elif(board[1]==board[5] and board[5]==board[9] and board[5]!=' '):
        game=win
    elif(board[3]==board[5] and board[5]==board[7] and board[5]!=' '):
        game=win
    elif(board[1]!=' ' and board[2]!=' ' and board[3]!=' ' and board[4]!=' ' and board[5]!=' ' and board[6]!=' ' and board[7]!=' ' and board[8]!=' ' and board[9]!=' '):
        game=draw
    else:
        game=running

        
print("hold on")
time.sleep(3)

while(game==running):
    
    drawboard()
    if(player%2 !=0):
        print("Its player 1 turn")
        mark='x'
    else:
        print("Its player 2 turn")
        mark='o'
        
    choice=int(input("enter the place where you wanna insert:"))
    if(position(choice)):
        board[choice]=mark
        player=player+1
        checkwin()
        
os.system('cls')
drawboard()
if(game==draw):
    print("game is draw bros")
elif(game==win):
    player=player-1
    if(player%2 !=0):
        print("player 1 won the game")
    else:
        print("player 2 won the game")

