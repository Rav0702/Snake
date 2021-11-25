#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

bool maps[60][20]={


{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},



{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},



{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1},
{1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1},
{1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1},
{1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1},
{1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
};



int main()
{
    sf::RectangleShape strawberry;
    
    bool ifshown;
    int time_show=0, time_stay=0;

    strawberry.setSize(sf::Vector2f(25, 25));
    strawberry.setFillColor(sf::Color::Red);
     
    ifshown = false;
    
    bool eaten=false;
          
    sf::RectangleShape body;
   
    sf::Clock clock;
    sf::Time time;

    body.setSize(sf::Vector2f(25, 25));
    body.setFillColor(sf::Color::Yellow);
    body.setOutlineThickness(-2);
    body.setOutlineColor(sf::Color::Black);
       
    body.setPosition(100,100);

    vector < sf::RectangleShape > snake;
    snake.push_back(body);
    
    sf::RenderWindow *w_window;
    
    srand( std::time( NULL ) );
             
    snake[0].setPosition(100, 100);

    sf::RenderWindow window(sf::VideoMode(500, 500), "SNAKE");
  

    sf::CircleShape Playbutton(50,3);
    Playbutton.setFillColor(sf::Color::Yellow);
    Playbutton.setPosition(300,200);
    sf::CircleShape Playbutton2(50);
    Playbutton2.setFillColor(sf::Color::Red);
    Playbutton2.setPosition(200,200);
    Playbutton.rotate(90);
    bool Play=false;
       
    sf::Font font;
    if(!font.loadFromFile("font file name")) //input file name
    {
        //error
    }     
    
    sf::Text text1("SNAKE", font , 50);
    text1.setColor(sf::Color::Yellow);
    text1.setPosition(175,100);
        
    sf::Text text2("CHOOSE THE MAP", font , 50);
    text2.setColor(sf::Color::Yellow);
    text2.setPosition(50,0);
 
    int map=-1;
    bool load=false;

    sf::Texture texture6;
    if (!texture6.loadFromFile("mapa3_ikona.jpg"))
    {
     // error...
    }
    sf::Sprite map3;
    map3.setTexture(texture6);
    map3.setPosition(sf::Vector2f(400,200));
    map3.setScale(sf::Vector2f(0.13 , 0.13));
    sf::Texture texture5;
    if (!texture5.loadFromFile("mapa2_ikona.png"))
    {
     // error...
    }
    sf::Sprite map2;
    map2.setTexture(texture5);
    map2.setPosition(sf::Vector2f(200,200));
    map2.setScale(sf::Vector2f(0.13 , 0.13));
    sf::Texture texture4;
    if (!texture4.loadFromFile("mapa1_ikona.png"))
    {
     // error...
    }
    sf::Sprite map1;
    map1.setTexture(texture4);
    map1.setPosition(sf::Vector2f(0,200));
    map1.setScale(sf::Vector2f(0.13 , 0.13));

    sf::RectangleShape block;
    block.setSize(sf::Vector2f(25, 25));
    block.setFillColor(sf::Color::Blue);
    block.setOutlineThickness(-2);
    block.setOutlineColor(sf::Color::Black);        

    bool selectedleft=false , selectedright=false ,selectedup=false, selecteddown=false;
  
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                    window.close();

        
                if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left && !Play)
                {
                    int Mouse_position[2];
                    Mouse_position[0] = sf::Mouse::getPosition(window).x;
                    Mouse_position[1] = sf::Mouse::getPosition(window).y;
                    if(Mouse_position[0]<=300 && Mouse_position[0]>=200 && Mouse_position[1]<=300 && Mouse_position[1]>=200)
                    {
                        Play=true;
                    
                    }
                }

        
        
            
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1) && map==-1)
		        {
    		        map=1;             
		        }
		        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2) && map==-1)
		        {
   			        map=2;
   		        }
		        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3) && map==-1)
		        {
    		        map=3;
		        }
		
            

                 
                if(map!=-1)
                {

                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)&&!selectedright)
                    {
                        selectedleft=true;
                        selectedright=false;
                        selectedup=false;
                        selecteddown=false;
                    }
            
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)&&!selecteddown)
                    {
                        selectedleft=false;
                        selectedright=false;
                        selectedup=true;
                        selecteddown=false;
                    }
            
            
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)&&!selectedup)
                    {
                        selectedleft=false;
                        selectedright=false;
                        selectedup=false;
                        selecteddown=true;
                    }       
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)&&!selectedleft)
                    {
                    selectedleft=false;
                    selectedright=true;
                    selectedup=false;
                    selecteddown=false;
                    }
                }
        
		}


            window.clear();
            
            
            if(map==-1&&Play)
            {
                window.draw(text2);
                window.draw(map1);
                window.draw(map2);
                window.draw(map3);
            }
                
            
                
            if(map==-1&&!Play)
            {
                window.draw(text1);
                window.draw(Playbutton2);
                window.draw(Playbutton);
            }
    
            if(map!=-1)
            {
	            for(int i=(map-1)*20;i<map*20;i++)
		        {
			        for(int j=0;j<20;j++)
			        {
				
				
				        if(maps[i][j]==0)
				        {
					        block.setPosition(sf::Vector2f((i%20)*25,j*25));
					        window.draw(block);
				        }
				
			        }
	            }
	
	        }
	
	
            if (map!=-1)
            {
                time = clock.getElapsedTime();
                if(time.asSeconds() >=0.1)
                {
                    for( int i = snake.size()-1; i > 0; i-- )
                    {
                        snake[i].setPosition(snake[i-1].getPosition().x, snake[i-1].getPosition().y);
                    }
                
                    if(selectedup)																		
                    {
                        snake[0].move(0, -25);
                    }
                    else if(selecteddown)
                    {
                        snake[0].move(0, 25);
                    }
                    else if(selectedleft)
                    {
                        snake[0].move(-25, 0);
                    }
                    else if(selectedright)
                    {
                        snake[0].move(25, 0);
                    }
                
                    clock.restart();
                }
            }

            int y=snake[0].getPosition().y;						
            int x=snake[0].getPosition().x;

            if(x >=500)										 
            {
                x=0;
                snake[0].setPosition(sf::Vector2f(x, y));
            }
            else if(x < 0)
            {
                x=475;
                snake[0].setPosition(sf::Vector2f(x, y));
            }
             else if(y >=500)
            {
                y=0;
                snake[0].setPosition(sf::Vector2f(x, y));
            }
            else if(y < 0)
            {
                y=475;
                snake[0].setPosition(sf::Vector2f(x, y));
            }


            if(map!=1)
            {
                int poz_x = snake[0].getPosition().x , poz_y = snake[0].getPosition().y;
                int odnosnik_y=((map-1)*20)+(poz_y/25) , odnosnik_x=poz_x/25;
            
                if(maps[odnosnik_y][odnosnik_x]==0)
                {
                    snake.clear();
                    snake.push_back(body);
                    snake[0].setPosition(50, 50);
                    map=-1;
                    selectedleft=false;
                    selectedright=false;
                    selectedup=false;
                    selecteddown=false;
                    
                }
            }

           

            for(int i=1; i<snake.size() ; i++)
            {
                if(snake[0].getPosition() == snake[i].getPosition())
                {
                    snake.clear();
                    snake.push_back(body);
                    snake[0].setPosition(50, 50);
                    map=-1;
                    selectedleft=false;
                    selectedright=false;
                    selectedup=false;
                    selecteddown=false;
                    
                    
                }
            }

             int randx, randy;

             
        if( map!=-1)
        {
        
            sf::Time time1 = clock.getElapsedTime();
           
            if(time1.asSeconds() >= time_show && !ifshown)
            {
            
                randx=(rand() % 20)*25;
                randy=(rand() % 20)*25;
            
            
                if(maps[(randy/25)+(map-1)*20][randx/25]==1)
                {
                    strawberry.setPosition(randx ,randy) ;
                    ifshown = true;
                }
            
            }
            else if(time1.asSeconds() >= time_stay && time_stay!=0)
            {
                clock.restart();
                ifshown = false;
            }
            else if(ifshown)
            {
                window.draw(strawberry);
            }


            if(snake[0].getPosition().x==strawberry.getPosition().x && snake[0].getPosition().y==strawberry.getPosition().y && ifshown)
            {
                ifshown = false;
                for(int i=0;i<rand()%5+1;i++)
                snake.push_back(body);
                clock.restart();

                eaten=true;
            }

        }
            
           
        if(map!=-1)
        {
            for( int i = 0; i < snake.size(); i++ )
            {
                window.draw(snake[i]);
            }
           
        }
            
        window.display();
 
    }
           
}    



    

