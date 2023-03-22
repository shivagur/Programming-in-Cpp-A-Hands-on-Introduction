Exercise-1


//DO NOT EDIT//////////////////////////////
class Satellite : public CelestialBody { //
///////////////////////////////////////////
  public: 
    Satellite(double s, double m, string c, string n, string hp) : CelestialBody(s, m, c, n) {
      host_planet = hp;
    }

    string GetHostPlanet() {
      return host_planet;
    }

    void SetHostPlanet(string new_host_planet) {
      host_planet = new_host_planet;
    }
  
  private: 
    string host_planet;
};

//DO NOT EDIT///////////////////////////
class Planet : public CelestialBody { //
////////////////////////////////////////
  public: 
    Planet(double s, double m, string c, string n, string hs) : CelestialBody(s, m, c, n) {
      host_star = hs;
    }

    string GetHostStar() {
      return host_star;
    }

    void SetHostStar(string new_host_star) {
      host_star = new_host_star;
    }
  
  private: 
    string host_star;
};


============================

Exercise-2

//DO NOT EDIT////////////////////
class BlogPost : public Book { //
/////////////////////////////////
  public:
    BlogPost(string t, string a, string g, string w, int wc, int pv) : Book(t, a, g) {
      website = w;
      word_count = wc;
      page_views = pv;
    }
  
    string GetWebsite() {
      return website;
    }

    void SetWebsite(string new_website) {
      website = new_website;
    }

    int GetWordCount() {
      return word_count;
    }

    void SetWordCount(int new_word_count) {
      word_count = new_word_count;
    }

    int GetPageViews() {
      return page_views;
    }

    void SetPageViews(int new_page_views) {
      page_views = new_page_views;
    }

  private:
    string website;
    int word_count;
    int page_views;
};


==============================

Exercise-3

class Child : public Parent2 {
  public:
    string Identify() {
      return "This function is called from Child";
    }
  
    string Identify2() {
      return Parent2::Identify();
    }
  
    string Identify3() {
      return Parent1::Identify();
    }
};


==========================

Exercise-4

//DO NOT EDIT/////////////////////
class Cash : public PiggyBank { //
//////////////////////////////////
  public:
    Cash(int o, int f, int tn, int tw) : PiggyBank(o, f, tn, tw) {}
  
    void DisplayBills() {
      cout << "One-dollar bill: " << GetOnes() << endl;
      cout << "Five-dollar bill: " << GetFives() << endl;
      cout << "Ten-dollar bill: " << GetTens() << endl;
      cout << "Twenty-dollar bill: " << GetTwenties() << endl;
    }
  
    void DisplayCashTotal() {
      cout << "Total amount: "; 
      cout << GetOnes() + GetFives() * 5 + GetTens() * 10 + GetTwenties() * 20;
      cout << endl;
    }
};

========================

Exercise-5

//DO NOT EDIT/////////////////////////////////////////////////
class CardHolder : public Person {                          //
  public:                                                   //
    CardHolder(string n, string a, int an) : Person(n, a) { //
      account_number = an;                                  //
      balance = 0;                                          //
      credit_limit = 5000;                                  //
    }                                                       //
//////////////////////////////////////////////////////////////
  
    int GetAccountNumber() {
      return account_number;
    }

    void SetAccountNumber(int new_account_number) {
      account_number = new_account_number;
    }

    double GetBalance() {
      return balance;
    }

    void SetBalance(double new_balance) {
      balance = new_balance;
    }

    int GetCreditLimit() {
      return credit_limit;
    }

    void SetCreditLimit(int new_credit_limit) {
      credit_limit = new_credit_limit;
    }

    void Sale(double price) {
      balance += price;
    }

    void Payment(double amount) {
      balance -= amount;
    }
  
  private:
    int account_number;
    double balance;
    int credit_limit;
};

//DO NOT EDIT/////////////////////////////////////////////////////////////
class PlatinumClient : public CardHolder {                              //
  public:                                                               //
    PlatinumClient(string n, string a, int an) : CardHolder(n, a, an) { //
      cash_back = 0.02;                                                 //
      rewards = 0;                                                      //
    }                                                                   //
//////////////////////////////////////////////////////////////////////////

    double GetCashBack() {
      return cash_back;
    }

    void SetCashBack(double new_cash_back) {
      cash_back = new_cash_back;
    }

    double GetRewards() {
      return rewards;
    }

    void SetRewards(double new_rewards) {
      rewards = new_rewards;
    }

    void Sale(double price) {
      rewards += cash_back * price;
      SetBalance(GetBalance() + price);
    }
  
  private:
    double cash_back;
    double rewards;
};
