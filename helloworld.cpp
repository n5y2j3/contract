#include <eosiolib/eosio.hpp>

using namespace eosio;

CONTRACT helloworld: public contract {
    public:
        using contract::contract;

        ACTION hi(name user) {
            //check(has_auth("jessijessijs"_n), "nnnnnnnnnn");
            //->계정이 내 계정일 때만 되는 거

            //check(has_auth("jessijessijs"_n) || has_auth("qwerty132455"_n), "do not enter");
            //->계정이 내 계정이나 qwerty 계정일 때만 되는 거
            print("hello, ", user);

        }

        ACTION getaccount(name user) {
            require_auth(get_self());
            print(is_account(user));
        }

    private:

};