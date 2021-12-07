
// Declare your class here. Do not use the 'public' access modifier.
    // Declare the price instance variable
/**   
*   Class Constructor
*   
*   @param title The book's title.
*   @param author The book's author.
*   @param price The book's price.
**/
class MyBook extends Book{
    private int price;
	
    MyBook(String title, String author, int price){
        super(title,author);
        this.price = price;
    }
	
	/**   
    *   Method Name: display
    *   
    *   Print the title, author, and price in the specified format.
    **/
	
    void display(){
        System.out.println("Title: " + super.title + "\nAuthor: " + super.author + "\nPrice: " + Integer.toString(price));
    }
}
    


