{
    // Place your C++ workspace snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body, and 
    // description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
    // is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
    // used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
    // $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
    // Placeholders with the same ids are connected.
    // Example:
    "boilerplate": {
        "prefix": "permutation",
        "body": [
            "const ll MAX = 2e5 + 7;",
            "vector<ll> fact(MAX);",
            "",
            "ll binpowmod(ll a, ll b) {",
            "    ll ans = 1;",
            "    while (b > 0) {",
            "        if ((b & 1) == 1) {",
            "            ans *= a;",
            "            ans %= mod;",
            "        }",
            "        a *= a;",
            "        a %= mod;",
            "        b = b >> 1;",
            "    }",
            "    return ans;",
            "}",
            "",
            "ll add(ll a, ll b) {",
            "    return (a + b) % mod;",
            "}",
            "",
            "ll sub(ll a, ll b) {",
            "    return ((a - b) % mod + mod) % mod;",
            "}",
            "",
            "ll mult(ll a, ll b) {",
            "    return (a * b) % mod;",
            "}",
            "",
            "ll inv(ll a) {",
            "    return binpowmod(a, mod - 2);",
            "}",
            "",
            "ll divide(ll a, ll b) {",
            "    return mult(a, inv(b));",
            "}",
            "",
            "ll nCr(ll n, ll r) {",
            "    if (n < r) return 0;",
            "    return divide(fact[n], mult(fact[r], fact[n - r]));",
            "}",
            "",
            "void preFactorial() {",
            "    fact[0] = 1;",
            "    for (ll i = 1; i < MAX; i++) {",
            "        fact[i] = mult(i, fact[i - 1]);",
            "    }",
            "}",
			"",
        ],
        "description": "Boilerplate for permutation and combinations with modular arithmetic"
    }
}
