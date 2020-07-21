
class random_generator
{
    int a_multiplier = 123;
    int c_increment = 258;
    int m_modulus = 65536;
    static int previous_number;
public:
    random_generator(int user_seed)
        {
            previous_number = user_seed;
            // test srand be initalizing seed = 0;
        }

    int get()
    {
        previous_number = (previous_number*a_multiplier + c_increment) % m_modulus;
        return previous_number;
    }

};

int random_generator::previous_number = 0;

using rg = random_generator;
