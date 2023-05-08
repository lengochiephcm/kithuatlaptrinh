#include <iostream>
using namespace std;
typedef struct{
    string moviename,moviegenre,location;
    int movietype;
}movie;
void enterMovie(movie *&m, int &n){
    m =  new movie[n];
    cout<<"\n--------------------------------------------------------------\n";
    cout<<"\n Enter number of movie:" ;
    cin>>n;
    cout<<"\n Enter details of movie: ";
    for(int i = 0 ; i < n ; i++){
        cout<<"\n"<<i+1<<" .Name of movie "<<": ";
        fflush(stdin);
        getline(cin,m[i].moviename);
        cout<<"\n Movie's genre:  ";
        fflush(stdin);
        getline(cin,m[i].moviegenre);
        cout<<"\nType of movie: ";
        cout<<"\n 1. Short. "<<"\t\t 2. Series"<<"\t\t: ";
        cin>>m[i].movietype;
        if(m[i].movietype > 1 || m [i].movietype < 0){
            while(m[i].movietype > 2 || m [i].movietype < 1){
                cout<<"\n Invaild value. Please enter again: ";
                cin>>m[i].movietype;
            }

        }
        cout<<"\n Enter location: C:/ ";
        fflush(stdin);
        getline(cin,m[i].location);
        


    }

}
void printOutOfList(movie*m, int n){
    cout<<"\n--------------------------------------------------------------\n";
    for(int i =0; i <n ; i++){
        cout<<"\n"<<i+1<<".Movie:  "<<m[i].moviename;
        cout<<"\t\t"<<"Genre : "<<m[i].moviegenre;
        if(m[i].movietype == 1){
            cout<<"\t\tShort movie.";

        }
        else if(m[i].movietype == 2){
            cout<<"\t\tSeries movie.";
        }
        cout<<"\t Location: C:/ "<<m[i].location;
    }

}
void findMovie(movie *m, int n){
    string film;
    cout<<"\n--------------------------------------------------------------\n ";
    printOutOfList(m,n);
    cout<<"\n Enter name of Movie you want to watch: ";
    fflush(stdin);
    getline(cin,film);
    for(int i =0; i <n ; i++){
        if( m[i].moviename == film){
            cout<<"\n This is a movie you want: ";
            cout<<"\t "<<m[i].moviename;
            cout<<"\t "<<m[i].moviegenre;
            if(m[i].movietype == 1){
            cout<<"\t\tShort movie.";

        }
        else if(m[i].movietype == 2){
            cout<<"\t\tSeries movie.";
        }
        cout<<"\t Location: C:/ "<<m[i].location;
            break;

        }
        else if(m[i].moviename!= film){
            cout<<"\nNOT FOUND!";
            break;
        }
        
    }
}

void remoteMovieOutOfList(movie *&m, int &n){
    int pos;
    cout<<"\n--------------------------------------------------------------\n ";
    printOutOfList(m,n);
    cout<<"\n Enter position of movie you want to remote: ";
    cin>>pos;
    
    for(int i = pos-1; i <n -1 ; i++){
        m[i] = m[i+1];
    }
    n--;
    printOutOfList(m,n);
}
void editMovieList(movie *&m, int n){
    int c;
    cout<<"\n--------------------------------------------------------------\n ";
    printOutOfList(m,n);
    cout<<"\n Enter position of movie you want to change movie's genre: ";
    cin>>c;
    if(c > n || c < 0){
        while(c > n || c < 0){
            cout<<"\n Invaild position. Please enter again: ";
            cin>>n;
        }
    }
    cout<<"\n Enter a genre of movie you need to change: ";
    fflush(stdin);
    getline(cin,m[c-1].moviegenre);
    
}
void addNewMovie(movie*&m, int &n){
    n +=1;
    cout<<"\n--------------------------------------------------------------\n ";
    cout<<"\n Enter a new movie: ";
    cout<<"\n Movie name: ";
    fflush(stdin);
    getline(cin,m[n-1].moviename);
    cout<<"\n Movie's genre:  ";
    fflush(stdin);
    getline(cin,m[n-1].moviegenre);
    cout<<"\nType of movie: ";
    cout<<"\n 1. Short. "<<"\t\t 2. Series"<<"\t\t: ";        
    cin>>m[n-1].movietype;
    if(m[n-1].movietype > 1 || m [n-1].movietype < 0){
                while(m[n-1].movietype > 2 || m [n-1].movietype < 1){
                cout<<"\n Invaild value. Please enter again: ";
                cin>>m[n-1].movietype;
            }
        }
    cout<<"\n Enter Location: C:/ ";
    fflush(stdin);
    getline(cin,m[n-1].location);
}
void findMovieByGenre(movie*m, int n){
    string g;
    cout<<"\n--------------------------------------------------------------\n ";
    printOutOfList(m,n);
    cout<<"\n Enter genre of movie you want to watch: ";
    fflush(stdin);
    getline(cin,g);
    cout<<"\n List of movie by genre: ";
    for(int i =0; i <n ; i++){
        if(g == m[i].moviegenre){
            cout<<"\n "<<m[i].moviename;
            cout<<"\t "<<m[i].moviegenre;
            if(m[i].movietype == 1){
            cout<<"\t\tShort movie.";

        }
        else if(m[i].movietype == 2){
            cout<<"\t\tSeries movie.";
        }
        cout<<"\t Location: C:/ "<<m[i].location;
        break;
        }
        else if(i == n-1){
            cout<<"\nPlease enter again genre you want to watch: ";
            fflush(stdin);
            getline(cin,g);
        }
    }
}
void menuChoseAction(movie*m, int n){
    int s;
    while(true){
    cout<<"\n ===========================MENU============================\n";
    cout<<"\n 1. Enter details of Movie.";
    cout<<"\n 2. Movie in list.";
    cout<<"\n 3. Remote a movie.";
    cout<<"\n 4. Find movie.";
    cout<<"\n 5. Add new movie.";
    cout<<"\n 6. Change movie's genre.";
    cout<<"\n 7. Find movie by genre.";
    cout<<"\n Enter your selection: ";
    cin>>s;
    while(s < 0 || s > 7){
        cout<<"\n Invail value. Please enter again: ";
        cin>>s;
    }
    switch(s){
        case 1: 
        enterMovie(m,n);
        break;
        case 2:
        printOutOfList(m,n);
        break;
        case 3: 
        remoteMovieOutOfList(m,n);
        break;        
        case 4: 
        findMovie(m,n);
        break;
        case 5: 
        addNewMovie(m,n);
        break;
        case 6: 
        editMovieList(m,n);
        break;
        case 7:
        findMovieByGenre(m,n);
        break;
        
    }
    }
}
int main(){
    int n;
    movie *m;
    menuChoseAction(m,n);
    delete []m;   
}