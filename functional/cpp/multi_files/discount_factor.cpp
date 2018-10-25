// Put here the functions discount_factor and print_discount_factor

double discount_factor(double rate, double maturity)
    {
        double res = std::exp(-rate * maturity);
        return res;
    }

std::vector<double> discount_factor(std::vector<double> rate, std::vector<double> maturity)
    {
        std::size_t size = rate.size();
        std::vector<double> res(size);
        for(size_t i = 0; i < size; ++i)
        {
            res[i] = std::exp(-rate[i] * maturity[i]);
            rate[i] = 0.; // No effect, rate is a copy of the passed argument
        }
        return res;
    }

void print_discount_factor(double rate, double maturity)
    {
        double df = discount_factor(rate, maturity);
        std::cout << "DF(" << maturity << "," << rate << ") = " << df << std::endl;
        // No return statement here
    }