//Function to show the Tic Tac Toe Frame
void showframe(int posx, int posy)
{

  int hr=196, vr=179; // These are ascii character which display the lines
  int crossbr=197;    // Another ascii character
  int x=posx, y=posy;
  int i,j;

  gotoxy(35,4); cprintf("TIC TAC TOE");
  gotoxy(35,5); for(i=0;i<11;i++) cprintf("%c",223);


  for(i=0;i<2;i++)
  {
    for(j=1;j<=11;j++)
     {
      gotoxy(x,y);
      printf("%c",hr);
      x++;p;    x++;
     }
    x=posx; y+=2;
  }
  x=posx+3; y=posy-1;

  for(i=0;i<2;i++)
  {

   for(j=1;j<=5;j++)
   {
      gotoxy(x,y);
      printf("%c",vr);
      y++;
   }
   x+=4;y=posy-1;
  }


  x=posx+3; y=posy;  
  gotoxy(x,y);
  printf("%c",crossbr);

   x=posx+7; y=posy;      
  gotoxy(x,y);
  printf("%c",crossbr);

  x=posx+3; y=posy+2;                    
  gotoxy(x,y);
  printf("%c",crossbr);

  x=posx+7; y=posy+2;         
  gotoxy(x,y);
  printf("%c",crossbr);

}
