#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	bool bLocal_66 = false;
	bool bLocal_67 = false;
	struct<194> Local_68 = { 0, 0, 8, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_262 = 0;
	struct<44> Local_263[32];
	int iLocal_1672 = 0;
	int iLocal_1673[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1682[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1691[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	float fLocal_1705 = 0f;
	int iLocal_1706 = 0;
	int iLocal_1707 = 0;
	int iLocal_1708 = 0;
	int iLocal_1709 = 0;
	bool bLocal_1710 = false;
	int iLocal_1711 = 0;
	int iLocal_1712 = 0;
	int iLocal_1713 = 0;
	float fLocal_1714 = 0f;
	float fLocal_1715 = 0f;
	float fLocal_1716 = 0f;
	float fLocal_1717 = 0f;
	float fLocal_1718 = 0f;
	int iLocal_1719 = 0;
	int iLocal_1720 = 0;
	vector3 vLocal_1721[50] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	bool bLocal_1872 = false;
	bool bLocal_1873 = false;
	bool bLocal_1874 = false;
	bool bLocal_1875 = false;
	bool bLocal_1876 = false;
	bool bLocal_1877 = false;
	int iLocal_1878 = 0;
	int iLocal_1879 = 0;
	int iLocal_1880 = 0;
	float fLocal_1881 = 0f;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	float fLocal_1884 = 0f;
	vector3 vLocal_1885 = { 0f, 0f, 0f };
	int iLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 12;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 1065353216;
	struct<9> Local_2589 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_2598 = 0;
	bool bLocal_2599 = false;
	int iLocal_2600 = 0;
	int iLocal_2601 = 0;
	char* sLocal_2602 = NULL;
	int iLocal_2603 = 0;
	vector3 vLocal_2604 = { 0f, 0f, 0f };
	vector3 vLocal_2607 = { 0f, 0f, 0f };
	vector3 vLocal_2610 = { 0f, 0f, 0f };
	float fLocal_2613 = 0f;
	vector3 vLocal_2614 = { 0f, 0f, 0f };
	int iLocal_2617 = 0;
	int iLocal_2618 = 0;
	float fLocal_2619 = 0f;
	int iLocal_2620 = 0;
	var uLocal_2621 = 16;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	int iLocal_2786 = 0;
	int iLocal_2787 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	bLocal_66 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	bLocal_67 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_1712 = joaat("PROP_TAXI_METER_2");
	fLocal_1714 = 1f;
	fLocal_1715 = (0.4f * fLocal_1714);
	fLocal_1716 = (0.6f * fLocal_1714);
	fLocal_1717 = 0.201f;
	fLocal_1718 = 0.351f;
	iLocal_1719 = 1076369579;
	iLocal_1720 = 1076631591;
	bLocal_1877 = true;
	iLocal_1879 = iLocal_1878;
	fLocal_1881 = 1.2f;
	fLocal_1884 = SYSTEM::TO_FLOAT(iLocal_1878);
	iLocal_2601 = 1;
	sLocal_2602 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 218, true);
	iLocal_2603 = LOCALIZATION::GET_CURRENT_LANGUAGE();
	vLocal_2604 = { -0.01f, 0.6f, 0.24f };
	vLocal_2607 = { -5f, 0f, 0f };
	vLocal_2610 = { 0f, -0.25f, 0.55f };
	fLocal_2613 = 50f;
	vLocal_2614 = { -0.3f, 1f, 0.35f };
	fLocal_2619 = 99999f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_368(ScriptParam_0))
		{
			func_366();
		}
	}
	while (true)
	{
		func_365();
		if (func_354())
		{
			func_366();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			if (func_353())
			{
				if (NETWORK::_0x638A3A81733086DB() != NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID()))
				{
					func_366();
				}
			}
			else
			{
				func_366();
			}
		}
		else if (NETWORK::_0x638A3A81733086DB() != -1)
		{
			func_366();
		}
		switch (func_352(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/] = 1;
				if (func_351() == 4)
				{
					Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/] = 3;
				}
				break;
			case 1:
				if (func_351() == 1)
				{
					func_325();
					func_38();
				}
				else if (func_351() == 4)
				{
					Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/] = 3;
				}
				break;
			case 3:
				func_36(&(Local_68.f_193));
				if (func_35(&(Local_68.f_193)))
				{
					Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/] = 4;
				}
				break;
			case 2:
				Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/] = 4;
			case 4:
				func_366();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_351())
			{
				case 0:
					Local_68 = 1;
					break;
				case 1:
					func_4();
					func_3();
					if (func_1())
					{
						Local_68 = 4;
					}
					break;
				case 4:
					break;
			}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	return 0;
}

void func_3()
{
	switch (Local_68.f_191)
	{
		case 0:
			Local_68.f_191 = 1;
			break;
		case 1:
			break;
		case 2:
		case 3:
		case 4:
			break;
	}
}

void func_4()
{
	if (iLocal_2786 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		func_27();
		iLocal_2786++;
	}
	else
	{
		func_5();
		MISC::SET_BIT(&(Local_68.f_2[iLocal_2787 /*23*/].f_6), 0);
		MISC::SET_BIT(&(Local_68.f_2[iLocal_2787 /*23*/].f_6), 2);
		Local_68.f_188 = 0;
		iLocal_2787++;
		if (iLocal_2787 >= 8)
		{
			iLocal_2786 = 0;
			iLocal_2787 = 0;
		}
	}
}

void func_5()
{
	int iVar0;

	iVar0 = iLocal_2787;
	func_18(iVar0);
	func_6(iVar0);
}

void func_6(int iParam0)
{
	vector3 vVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (Local_68.f_2[iParam0 /*23*/].f_7 != 11 && !MISC::IS_BIT_SET(Local_68.f_2[iParam0 /*23*/].f_6, 4))
	{
		if (MISC::IS_BIT_SET(Local_68.f_2[iParam0 /*23*/].f_6, 0))
		{
			func_17(iParam0, 11);
			func_16(iParam0, 0);
		}
		else if (func_15(Local_68.f_2[iParam0 /*23*/].f_1) || !func_13(Local_68.f_2[iParam0 /*23*/]))
		{
			func_17(iParam0, 11);
			func_16(iParam0, 0);
		}
		else if (!PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), false))
		{
			func_17(iParam0, 11);
			func_16(iParam0, 0);
		}
	}
	if (!func_15(Local_68.f_2[iParam0 /*23*/].f_1) && func_13(Local_68.f_2[iParam0 /*23*/]))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), true) };
		switch (Local_68.f_2[iParam0 /*23*/].f_7)
		{
			case 0:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])) > 0)
				{
					func_17(iParam0, 4);
				}
				break;
			case 1:
				if (Local_68.f_2[iParam0 /*23*/].f_2 != -1)
				{
					if (func_12(vVar0, Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, 45f))
					{
						if (!func_11(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, 0f, 0f, 0f, 0))
						{
							func_17(iParam0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_68.f_2[iParam0 /*23*/].f_2)))
					{
						if (func_10(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_68.f_2[iParam0 /*23*/].f_2)), 1, 1))
						{
							if (func_12(vVar0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_68.f_2[iParam0 /*23*/].f_2))), true), 5f))
							{
								func_17(iParam0, 2);
							}
						}
					}
				}
				else
				{
					func_17(iParam0, 8);
				}
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])) > 0)
				{
					func_17(iParam0, 4);
				}
				break;
			case 2:
				if (Local_68.f_2[iParam0 /*23*/].f_2 != -1)
				{
					if (MISC::IS_BIT_SET(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 21))
					{
						if (!func_9(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), -272084098, 1))
						{
							if (!func_9(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), -1817882002, 1))
							{
								if (VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])))
								{
									func_17(iParam0, 3);
								}
							}
						}
						else if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_68.f_2[iParam0 /*23*/].f_2)))
						{
							if (func_10(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_68.f_2[iParam0 /*23*/].f_2)), 1, 1))
							{
								if (func_12(vVar0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_68.f_2[iParam0 /*23*/].f_2))), true), 5f))
								{
									if (VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])) || VEHICLE::IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])))
									{
										func_17(iParam0, 3);
									}
									else if (!func_12(vVar0, Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, 10f))
									{
										func_17(iParam0, 3);
									}
								}
							}
						}
					}
				}
				else
				{
					func_17(iParam0, 8);
				}
				if (MISC::IS_BIT_SET(Local_68.f_2[iParam0 /*23*/].f_6, 2))
				{
					func_17(iParam0, 8);
				}
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])) > 0)
				{
					func_17(iParam0, 4);
				}
				break;
			case 3:
				if (MISC::IS_BIT_SET(Local_68.f_2[iParam0 /*23*/].f_6, 2))
				{
					func_17(iParam0, 8);
				}
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])) > 0)
				{
					func_17(iParam0, 4);
				}
				break;
			case 4:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])) <= 0)
				{
					func_17(iParam0, 8);
				}
				else if (Local_68.f_2[iParam0 /*23*/].f_3 != -1)
				{
					if (!func_11(Local_68.f_2[iParam0 /*23*/].f_8, 0f, 0f, 0f, 0))
					{
						func_17(iParam0, 5);
					}
				}
				break;
			case 5:
				if (Local_68.f_2[iParam0 /*23*/].f_3 != -1)
				{
					if (!func_11(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, 0f, 0f, 0f, 0))
					{
						if (func_8(iParam0))
						{
							if (VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])) || ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])) < 2f)
							{
								func_17(iParam0, 6);
							}
						}
					}
				}
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])) <= 0)
				{
					func_17(iParam0, 8);
				}
				break;
			case 6:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])) <= 0)
				{
					func_17(iParam0, 8);
				}
				else
				{
					func_7(iParam0, 1);
				}
				break;
			case 7:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])) <= 0)
				{
					func_17(iParam0, 8);
				}
				break;
			case 8:
				func_16(iParam0, 0);
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])) > 0)
				{
					MISC::CLEAR_BIT(&(Local_68.f_2[iParam0 /*23*/].f_6), 3);
					if (Local_68.f_2[iParam0 /*23*/].f_3 != -1)
					{
						MISC::CLEAR_BIT(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 20);
					}
					func_17(iParam0, 4);
				}
				break;
			case 9:
			case 10:
				func_7(iParam0, 0);
				break;
			case 11:
				func_16(iParam0, 0);
				break;
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iParam0 /*23*/]) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iParam0 /*23*/].f_1))
	{
		if ((MISC::IS_BIT_SET(Local_68.f_190, iParam0) && !MISC::IS_BIT_SET(Local_68.f_190, iParam0 + 8)) && Local_68.f_2[iParam0 /*23*/].f_2 == -1)
		{
			if (Local_68.f_189 > 0)
			{
				Local_68.f_189 = (Local_68.f_189 - 1);
				MISC::CLEAR_BIT(&(Local_68.f_190), iParam0);
				MISC::SET_BIT(&(Local_68.f_190), iParam0 + 8);
			}
		}
		if (Local_68.f_2[iParam0 /*23*/].f_3 != -1)
		{
			Local_68.f_2[iParam0 /*23*/].f_3 = -1;
		}
		if (Local_68.f_2[iParam0 /*23*/].f_4 != -1)
		{
			Local_68.f_2[iParam0 /*23*/].f_4 = -1;
		}
	}
}

void func_7(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_15(Local_68.f_2[iParam0 /*23*/].f_1) && func_13(Local_68.f_2[iParam0 /*23*/]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_68.f_2[iParam0 /*23*/].f_1))
		{
			if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])) > 0)
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), -1, false) == NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1))
				{
					iVar0 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]));
					iVar1 = 0;
					iVar1 = 0;
					while (iVar1 < iVar0)
					{
						if (iVar1 != -1)
						{
							iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), iVar1, false);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2))
							{
								if (!PED::IS_PED_INJURED(iVar2))
								{
									if (!func_9(iVar2, -828834893, 1) && !func_9(iVar2, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 1))
									{
										if (bParam1)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(iVar2, 0, 0);
										}
										else
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(iVar2, 0, 64);
										}
									}
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
	}
}

int func_8(int iParam0)
{
	if (Local_68.f_2[iParam0 /*23*/].f_3 != -1)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_ENT(Local_68.f_2[iParam0 /*23*/]), Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, 45f, 45f, 20f, false, true, 0) || MISC::IS_BIT_SET(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2, 20))
		{
			MISC::SET_BIT(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 20);
			if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), 242628503) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_10(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_11(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_12(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return SYSTEM::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
}

int func_13(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_14(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_14(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_16(int iParam0, bool bParam1)
{
	if ((Local_68.f_2[iParam0 /*23*/].f_2 != -1 || !func_11(Local_68.f_2[iParam0 /*23*/].f_8, 0f, 0f, 0f, 0)) || bParam1)
	{
		if (Local_68.f_2[iParam0 /*23*/].f_2 != -1)
		{
			MISC::CLEAR_BIT(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_1), 0);
			MISC::CLEAR_BIT(&(Local_68.f_192), Local_68.f_2[iParam0 /*23*/].f_2);
			Local_68.f_2[iParam0 /*23*/].f_2 = -1;
			Local_68.f_187 = (Local_68.f_187 - 1);
		}
		Local_68.f_2[iParam0 /*23*/].f_8 = { 0f, 0f, 0f };
		Local_68.f_2[iParam0 /*23*/].f_11 = 0f;
		Local_68.f_2[iParam0 /*23*/].f_22 = 0;
		Local_68.f_2[iParam0 /*23*/].f_19 = 0;
		MISC::CLEAR_BIT(&(Local_68.f_2[iParam0 /*23*/].f_6), 3);
		iLocal_1691[iParam0] = 0;
	}
}

void func_17(int iParam0, int iParam1)
{
	Local_68.f_2[iParam0 /*23*/].f_7 = iParam1;
}

void func_18(int iParam0)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iParam0 /*23*/]))
	{
		if (Local_68.f_2[iParam0 /*23*/].f_2 != -1)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_68.f_2[iParam0 /*23*/].f_2)))
			{
				if (!func_26(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21))
				{
					if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21, 3f, 3f, 3f, 0))
					{
						if (func_19(iParam0, Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21, Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_24, 0))
						{
							func_17(iParam0, 1);
						}
					}
				}
			}
		}
	}
	if (func_13(Local_68.f_2[iParam0 /*23*/]))
	{
		Local_68.f_188++;
	}
	if (Local_68.f_2[iParam0 /*23*/].f_2 != -1)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_68.f_2[iParam0 /*23*/].f_2)))
		{
			MISC::CLEAR_BIT(&(Local_68.f_192), Local_68.f_2[iParam0 /*23*/].f_2);
			Local_68.f_2[iParam0 /*23*/].f_2 = -1;
			Local_68.f_187 = (Local_68.f_187 - 1);
		}
	}
	if (Local_68.f_2[iParam0 /*23*/].f_3 != -1)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_68.f_2[iParam0 /*23*/].f_3)))
		{
			Local_68.f_2[iParam0 /*23*/].f_3 = -1;
		}
	}
}

int func_19(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	if (func_25(Global_2537071.f_796) && func_25(Global_2537071.f_797))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iParam0 /*23*/]))
		{
			if (func_22(&(Local_68.f_2[iParam0 /*23*/]), Global_2537071.f_796, vParam1, fParam4, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				if (bParam5)
				{
					ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), fParam4);
					ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), 2f, 0f, 0f), true, false, false, true);
				}
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), 5f);
				VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), true);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), false, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), true);
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_68.f_2[iParam0 /*23*/], true);
			}
		}
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iParam0 /*23*/].f_1))
		{
			if (func_21(&(Local_68.f_2[iParam0 /*23*/].f_1), Local_68.f_2[iParam0 /*23*/], 25, Global_2537071.f_797, -1, 1, 1, 1))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), 5f);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_2537071.f_796);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_2537071.f_797);
				ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), false);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), true);
				PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), 29, true);
				PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), 251, true);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), false);
				PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), 5, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), 17, true);
				PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), 512, false);
				ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), SYSTEM::ROUND((200f * Global_262145.f_154)), 0);
				func_20(&uLocal_2621, 8, NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "FM_TAXI", 0, 1);
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_68.f_2[iParam0 /*23*/].f_1, true);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iParam0 /*23*/]) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iParam0 /*23*/].f_1))
	{
		return 0;
	}
	MISC::CLEAR_BIT(&(Local_68.f_2[iParam0 /*23*/].f_6), 4);
	return 1;
}

void func_20(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

int func_21(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_22(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	float fVar0;
	int iVar1;

	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("BOMBUSHKA"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(vParam2, fVar0, false, false, false, false, false, false);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2537071.f_6516 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, true);
			}
			ENTITY::_SET_ENTITY_SOMETHING(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_23(vParam2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_23(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;

	if (func_24(PLAYER::PLAYER_ID(), vParam0, iParam4) > -1)
	{
		if ((Global_2405072.f_2912[1 /*6*/].f_5 == iParam5 && Global_2405072.f_2912[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2405072.f_2912[1 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405072.f_2912[iVar0 /*6*/] = { Global_2405072.f_2912[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405072.f_2912[1 /*6*/] = { vParam0 };
		Global_2405072.f_2912[1 /*6*/].f_3 = fParam3;
		Global_2405072.f_2912[1 /*6*/].f_4 = iParam4;
		Global_2405072.f_2912[1 /*6*/].f_5 = iParam5;
	}
}

int func_24(int iParam0, vector3 vParam1, int iParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				vVar2 = { vParam1 };
				if (MISC::ABSF((Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.f_2 = Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_25(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_26(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_27()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = iLocal_2786;
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
		if (!func_10(iVar1, 1, 1))
		{
			iVar3 = 0;
			while (iVar3 < 8)
			{
				if (Local_68.f_2[iVar3 /*23*/].f_2 == iVar0)
				{
					func_16(iVar3, 0);
				}
				if (Local_68.f_2[iVar3 /*23*/].f_3 == iVar0)
				{
					func_34(iVar3);
					Local_68.f_2[iVar3 /*23*/].f_3 = -1;
					if (func_33(&uLocal_1703))
					{
						func_32(&uLocal_1703);
					}
				}
				iVar3++;
			}
		}
		else
		{
			if (!MISC::IS_BIT_SET(Local_68.f_192, iVar0) && MISC::IS_BIT_SET(Local_263[iVar0 /*44*/].f_1, 0))
			{
				if (func_31())
				{
					func_30(iVar0);
					MISC::SET_BIT(&(Local_68.f_192), iVar0);
				}
				else
				{
					MISC::CLEAR_BIT(&(Local_263[iVar0 /*44*/].f_1), 0);
				}
			}
			iVar3 = 0;
			while (iVar3 < 8)
			{
				if (MISC::IS_BIT_SET(Local_263[iVar0 /*44*/].f_4.f_2, 18))
				{
					if (Local_68.f_2[iVar3 /*23*/].f_2 != -1)
					{
						func_16(iVar3, 0);
					}
					MISC::CLEAR_BIT(&(Local_263[iVar0 /*44*/].f_4.f_2), 18);
				}
				if (MISC::IS_BIT_SET(Local_263[iVar0 /*44*/].f_4.f_3, iVar3))
				{
					if (Local_68.f_2[iVar3 /*23*/].f_7 != 11)
					{
						if (Local_68.f_2[iVar3 /*23*/].f_7 != 9)
						{
							if (Local_68.f_2[iVar3 /*23*/].f_7 != 10)
							{
								Local_68.f_2[iVar3 /*23*/].f_4 = iVar0;
								func_17(iVar3, 9);
								func_16(iVar3, 1);
							}
						}
					}
				}
				if (!func_15(Local_68.f_2[iVar3 /*23*/].f_1) && func_13(Local_68.f_2[iVar3 /*23*/]))
				{
					if (Local_68.f_2[iVar3 /*23*/].f_3 == -1)
					{
						if (Local_263[iVar0 /*44*/].f_4.f_1 == iVar3 && Local_68.f_2[iVar3 /*23*/].f_7 == 8)
						{
							func_17(iVar3, 3);
							if (Local_68.f_2[iVar3 /*23*/].f_2 == -1)
							{
								Local_68.f_2[iVar3 /*23*/].f_2 = iVar0;
							}
							Local_263[iVar0 /*44*/].f_4.f_1 = -1;
						}
						if (MISC::IS_BIT_SET(Local_263[iVar0 /*44*/].f_3, (0 + iVar3)))
						{
							if ((Local_68.f_2[iVar3 /*23*/].f_7 == 8 || Local_68.f_2[iVar3 /*23*/].f_7 == 1) || Local_68.f_2[iVar3 /*23*/].f_7 == 2)
							{
								func_17(iVar3, 3);
							}
						}
						if ((((func_29(iVar1, NETWORK::NET_TO_VEH(Local_68.f_2[iVar3 /*23*/])) && Local_68.f_2[iVar3 /*23*/].f_7 != 6) && Local_68.f_2[iVar3 /*23*/].f_7 != 9) && Local_68.f_2[iVar3 /*23*/].f_7 != 10) && Local_68.f_2[iVar3 /*23*/].f_7 != 11)
						{
							MISC::CLEAR_BIT(&(Local_68.f_2[iVar3 /*23*/].f_6), 0);
							MISC::CLEAR_BIT(&(Local_68.f_2[iVar3 /*23*/].f_6), 2);
							if (Local_68.f_2[iVar3 /*23*/].f_2 != -1)
							{
								MISC::CLEAR_BIT(&(Local_68.f_192), Local_68.f_2[iVar3 /*23*/].f_2);
								Local_68.f_2[iVar3 /*23*/].f_2 = -1;
								Local_68.f_187 = (Local_68.f_187 - 1);
							}
							Local_68.f_2[iVar3 /*23*/].f_3 = iVar0;
						}
						else if (ENTITY::IS_ENTITY_AT_ENTITY(iVar2, NETWORK::NET_TO_VEH(Local_68.f_2[iVar3 /*23*/]), 120f, 120f, 120f, false, true, 0))
						{
							if (Local_68.f_2[iVar3 /*23*/].f_2 == -1)
							{
								MISC::CLEAR_BIT(&(Local_68.f_2[iVar3 /*23*/].f_6), 2);
							}
							else if (Local_68.f_2[iVar3 /*23*/].f_2 == iVar0)
							{
								MISC::CLEAR_BIT(&(Local_68.f_2[iVar3 /*23*/].f_6), 2);
							}
							MISC::CLEAR_BIT(&(Local_68.f_2[iVar3 /*23*/].f_6), 0);
						}
						else if (ENTITY::IS_ENTITY_AT_ENTITY(iVar2, NETWORK::NET_TO_VEH(Local_68.f_2[iVar3 /*23*/]), 300f, 300f, 300f, false, true, 0))
						{
							MISC::CLEAR_BIT(&(Local_68.f_2[iVar3 /*23*/].f_6), 0);
						}
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(iVar1) > 0)
						{
							if (Local_68.f_2[iVar3 /*23*/].f_2 == iVar0)
							{
								MISC::SET_BIT(&(Local_68.f_2[iVar3 /*23*/].f_6), 2);
							}
						}
					}
					else if (Local_68.f_2[iVar3 /*23*/].f_3 == iVar0)
					{
						if (!func_29(iVar1, NETWORK::NET_TO_VEH(Local_68.f_2[iVar3 /*23*/])))
						{
							func_16(iVar3, 1);
							Local_68.f_2[iVar3 /*23*/].f_3 = -1;
						}
						else
						{
							if (Local_68.f_2[iVar3 /*23*/].f_7 == 5 || Local_68.f_2[iVar3 /*23*/].f_7 == 7)
							{
								if (!MISC::IS_BIT_SET(Local_68.f_2[iVar3 /*23*/].f_6, 3) && MISC::IS_BIT_SET(Local_263[iVar0 /*44*/].f_4.f_2, 3))
								{
									MISC::SET_BIT(&(Local_68.f_2[iVar3 /*23*/].f_6), 3);
									MISC::CLEAR_BIT(&(Local_263[iVar0 /*44*/].f_4.f_2), 4);
									MISC::CLEAR_BIT(&(Local_263[iVar0 /*44*/].f_4.f_2), 5);
									func_17(iVar3, 5);
								}
								else if (MISC::IS_BIT_SET(Local_263[iVar0 /*44*/].f_4.f_2, 4))
								{
									MISC::CLEAR_BIT(&(Local_263[iVar0 /*44*/].f_4.f_2), 4);
									func_17(iVar3, 7);
								}
								else if (Local_68.f_2[iVar3 /*23*/].f_7 == 7)
								{
									if (MISC::IS_BIT_SET(Local_263[iVar0 /*44*/].f_4.f_2, 5))
									{
										MISC::CLEAR_BIT(&(Local_263[iVar0 /*44*/].f_4.f_2), 5);
										func_17(iVar3, 5);
									}
								}
							}
							if ((Local_68.f_2[iVar3 /*23*/].f_7 == 5 || Local_68.f_2[iVar3 /*23*/].f_7 == 7) || Local_68.f_2[iVar3 /*23*/].f_7 == 4)
							{
								if (Local_68.f_2[iVar3 /*23*/].f_19 != Local_263[iVar0 /*44*/].f_4.f_15)
								{
									Local_68.f_2[iVar3 /*23*/].f_8 = { Local_263[iVar0 /*44*/].f_4.f_5 };
									Local_68.f_2[iVar3 /*23*/].f_11 = Local_263[iVar0 /*44*/].f_4.f_14;
									Local_68.f_2[iVar3 /*23*/].f_19 = Local_263[iVar0 /*44*/].f_4.f_15;
									func_17(iVar3, 5);
									MISC::CLEAR_BIT(&(Local_263[iVar0 /*44*/].f_4.f_2), 20);
								}
							}
						}
						MISC::CLEAR_BIT(&(Local_68.f_2[iVar3 /*23*/].f_6), 0);
						MISC::CLEAR_BIT(&(Local_68.f_2[iVar3 /*23*/].f_6), 2);
					}
					if (Local_263[iVar0 /*44*/].f_4.f_19 == iVar3 && Local_68.f_2[iVar3 /*23*/].f_22 == 0)
					{
						if (Local_263[iVar0 /*44*/].f_4.f_18 != 0)
						{
							Local_68.f_2[iVar3 /*23*/].f_22 = Local_263[iVar0 /*44*/].f_4.f_18;
							Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_19 = -1;
							Local_263[iVar0 /*44*/].f_4.f_18 = 0;
						}
					}
					else if (MISC::IS_BIT_SET(Local_263[iVar0 /*44*/].f_4.f_2, 6))
					{
						Local_68.f_2[iVar3 /*23*/].f_22 = 0;
						Local_263[iVar0 /*44*/].f_4.f_19 = -1;
						MISC::CLEAR_BIT(&(Local_263[iVar0 /*44*/].f_4.f_2), 6);
					}
				}
				else if (MISC::IS_BIT_SET(Local_263[iVar0 /*44*/].f_1, 0) || Local_68.f_2[iVar3 /*23*/].f_2 == iVar0)
				{
					MISC::CLEAR_BIT(&(Local_68.f_2[iVar3 /*23*/].f_6), 0);
					MISC::CLEAR_BIT(&(Local_68.f_2[iVar3 /*23*/].f_6), 2);
				}
				else
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iVar3 /*23*/].f_1))
					{
						func_28(&(Local_68.f_2[iVar3 /*23*/].f_1));
					}
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iVar3 /*23*/]))
					{
						func_28(&(Local_68.f_2[iVar3 /*23*/]));
					}
					if (Local_68.f_2[iVar3 /*23*/].f_2 == -1)
					{
						func_16(iVar3, 0);
					}
					if (Local_68.f_2[iVar3 /*23*/].f_3 != -1)
					{
						func_16(iVar3, 1);
						Local_68.f_2[iVar3 /*23*/].f_3 = -1;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_28(var uParam0)
{
	int iVar0;

	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam1) + 1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam1, (iVar0 - 1), false))
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, (iVar0 - 1), false);
				if (!PED::IS_PED_INJURED(iVar2))
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						if (PLAYER::GET_PLAYER_PED(iParam0) == iVar2)
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_30(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Local_68.f_2[iVar0 /*23*/].f_2 == -1 && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iVar0 /*23*/]))
		{
			Local_68.f_2[iVar0 /*23*/].f_2 = iParam0;
			Local_68.f_187++;
			Local_68.f_189++;
			MISC::SET_BIT(&(Local_68.f_190), iVar0);
			MISC::CLEAR_BIT(&(Local_68.f_190), iVar0 + 8);
			MISC::CLEAR_BIT(&(Local_263[iParam0 /*44*/].f_1), 0);
			MISC::SET_BIT(&(Local_68.f_2[iVar0 /*23*/].f_6), 4);
			return;
		}
		iVar0++;
	}
}

int func_31()
{
	if (Local_68.f_187 >= 8 || Local_68.f_188 >= 8)
	{
		return 0;
	}
	return 1;
}

void func_32(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_33(var uParam0)
{
	return uParam0->f_1;
}

void func_34(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_4 = vLocal_1721[iLocal_1707 /*3*/];
	if (HUD::DOES_BLIP_EXIST(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_4))
	{
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		vLocal_1721[iVar0 /*3*/] = { vVar1 };
		iVar0++;
	}
	iLocal_1706 = 0;
}

int func_35(var uParam0)
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_36(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_37(uParam0, 0, 0);
		}
	}
}

void func_37(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_38()
{
	int iVar0;

	MISC::CLEAR_BIT(&(Global_2537071.f_795), 1);
	func_324();
	func_323();
	func_302(iLocal_2620);
	func_220();
	func_195(iLocal_2620);
	func_194(iLocal_2620);
	func_192(iLocal_2620);
	if (iLocal_2617 != iLocal_2620)
	{
		func_195(iLocal_2617);
		func_194(iLocal_2617);
		func_192(iLocal_2617);
	}
	iLocal_2620++;
	if (iLocal_2620 == 8)
	{
		fLocal_2619 = 99999f;
		iLocal_2617 = iLocal_2618;
		iLocal_2620 = 0;
	}
	func_45(iLocal_2617);
	if (func_10(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (Local_68.f_2[iVar0 /*23*/].f_3 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					func_39(1, 1, 1);
				}
				iVar0++;
			}
			func_39(0, 0, 0);
		}
	}
	else
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (Local_68.f_2[iVar0 /*23*/].f_3 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					func_39(1, 1, 1);
				}
				iVar0++;
			}
		}
		func_39(1, 1, 0);
	}
}

void func_39(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;

	if (((((((Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4 != -1 || !func_11(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_5, 0f, 0f, 0f, 0)) || iLocal_1879 != iLocal_1878) || Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_18 != 0) || Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_19 != -1) || MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 10)) || MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 17)) || bParam2)
	{
		MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 2);
		MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 3);
		MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 4);
		MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 5);
		MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 7);
		MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 10);
		MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 11);
		MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 12);
		MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 13);
		MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 14);
		MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 20);
		MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 21);
		MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 22);
		MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 23);
		MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 24);
		MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 25);
		Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_5 = { 0f, 0f, 0f };
		Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_14 = 0f;
		Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_15 = 0;
		Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4 = -1;
		Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_1 = -1;
		Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_34 = -1;
		Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_26 = { 0f, 0f, 0f };
		Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_29 = 0f;
		Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_30 = { 0f, 0f, 0f };
		Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_33 = 0f;
		Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_35 = -1;
		Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_36 = { 0f, 0f, 0f };
		iVar0 = 0;
		while (iVar0 < 50)
		{
			vLocal_1721[iVar0 /*3*/] = { vVar1 };
			iVar0++;
		}
		iLocal_1707 = 0;
		iLocal_1709 = 0;
		bLocal_1710 = false;
		bLocal_1874 = false;
		Global_110691 = 0;
		fLocal_1884 = SYSTEM::TO_FLOAT(iLocal_1878);
		iLocal_1879 = iLocal_1878;
		iLocal_1880 = iLocal_1878;
		func_32(&uLocal_1882);
		fLocal_1881 = fLocal_1881;
		vLocal_1885 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_18 = 0;
		Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_19 = -1;
		func_42(1, -1);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		STREAMING::REMOVE_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
		Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_4 = 0;
		func_32(&uLocal_1701);
	}
	if (iParam0 == 1)
	{
		Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_21 = { 0f, 0f, 0f };
		Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_24 = 0f;
		Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_26 = { 0f, 0f, 0f };
		Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_29 = 0f;
	}
	if (MISC::IS_BIT_SET(Global_2537071.f_795, 2))
	{
		MISC::CLEAR_BIT(&(Global_2537071.f_795), 2);
	}
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("taxi");
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1711))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1711);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1712);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_2600))
	{
		CAM::SET_CAM_ACTIVE(iLocal_2600, false);
		CAM::DESTROY_CAM(iLocal_2600, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		func_40();
	}
	if (bLocal_2599 == 0)
	{
		bLocal_2599 = true;
	}
	if (iParam1 == 1 && Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_1 != 0)
	{
		Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_1 = 0;
	}
}

void func_40()
{
	func_41(4, 0, -1);
	HUD::UNLOCK_MINIMAP_POSITION();
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::SET_RADAR_ZOOM(0);
	CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_2601);
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
}

void func_41(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1377170.f_137[iParam2] = bParam1;
			}
			break;
		default:
			if (bParam1)
			{
				MISC::SET_BIT(&(Global_1377170.f_1046), iParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1377170.f_1046), iParam0);
			}
			break;
	}
}

void func_42(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_44(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8417)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_22350.f_8417 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_22350.f_5628[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_43(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_43(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_44(int iParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;

	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*iParam0 = iVar17;
			return 1;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*iParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_45(int iParam0)
{
	if (func_10(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!func_15(Local_68.f_2[iParam0 /*23*/].f_1) && func_13(Local_68.f_2[iParam0 /*23*/]))
		{
			if (PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), false))
			{
				func_184(iParam0);
				func_177(iParam0);
				func_51(iParam0);
			}
			else
			{
				func_46(iParam0);
			}
		}
		else
		{
			func_46(iParam0);
		}
	}
	else
	{
		func_46(iParam0);
	}
}

void func_46(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_1672, (0 + iParam0)))
	{
		MISC::CLEAR_BIT(&iLocal_1672, (0 + iParam0));
		if (func_33(&uLocal_1703))
		{
			func_32(&uLocal_1703);
		}
		if (func_50("TXM_H02"))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_3, (0 + iParam0)))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			bLocal_1875 = false;
		}
		MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_3), (0 + iParam0));
	}
	func_48(&(uLocal_1682[iParam0]));
	if (Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4 == iParam0)
	{
		func_39(1, 1, 0);
	}
	func_47(iParam0);
}

void func_47(int iParam0)
{
	if (HUD::DOES_BLIP_EXIST(iLocal_1673[iParam0]))
	{
		HUD::REMOVE_BLIP(&(iLocal_1673[iParam0]));
		MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 12);
	}
}

void func_48(var uParam0)
{
	int iVar0;

	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_49(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_49(int iParam0)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_50(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_51(int iParam0)
{
	if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), false) && !PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_BEING_JACKED(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1))) && !MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_3, iParam0))
	{
		STREAMING::REQUEST_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
		if (func_176(iParam0) && STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@TAXI@DRIVER"))
		{
			if (Local_68.f_2[iParam0 /*23*/].f_7 == 6)
			{
				if (CAM::DOES_CAM_EXIST(iLocal_2600))
				{
					CAM::SET_CAM_ACTIVE(iLocal_2600, false);
					CAM::DESTROY_CAM(iLocal_2600, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					func_40();
				}
				if (VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])))
				{
					func_154(iParam0);
				}
			}
			else
			{
				if ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || Local_68.f_2[iParam0 /*23*/].f_7 == 9) || Local_68.f_2[iParam0 /*23*/].f_7 == 10)
				{
					func_7(iParam0, 0);
				}
				func_88(iParam0);
			}
			if (Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4 != iParam0)
			{
				Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4 = iParam0;
				MISC::SET_BIT(&(Global_2537071.f_795), 2);
			}
			func_82(iParam0);
			func_81(iParam0);
		}
		func_57(iParam0);
		PAD::_0x7F4724035FDCA1DD(0);
		PAD::_0x7F4724035FDCA1DD(1);
		PAD::_0x7F4724035FDCA1DD(2);
		func_56();
		func_55();
		PED::SET_PED_COMBAT_ATTRIBUTES(PLAYER::PLAYER_PED_ID(), 2, false);
		PAD::DISABLE_CONTROL_ACTION(0, 99, true);
		PAD::DISABLE_CONTROL_ACTION(0, 100, true);
		PAD::DISABLE_CONTROL_ACTION(0, 25, true);
		PAD::DISABLE_CONTROL_ACTION(0, 73, true);
		PAD::DISABLE_CONTROL_ACTION(0, 200, true);
		func_54();
		if (Local_68.f_2[iParam0 /*23*/].f_3 == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 376, true);
		}
		if (func_53() || func_52(0))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 75, true);
		}
	}
	else if (Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4 == iParam0)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if ((Local_68.f_2[iParam0 /*23*/].f_7 != 9 && Local_68.f_2[iParam0 /*23*/].f_7 != 10) && !MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_3, iParam0))
				{
					func_154(iParam0);
				}
			}
			else
			{
				MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_3), iParam0);
			}
		}
		func_39(1, 1, 0);
		func_34(iParam0);
		if (func_33(&uLocal_1703))
		{
			func_32(&uLocal_1703);
		}
	}
}

int func_52(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7356, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CELLPHONE_FLASHHAND")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_53()
{
	return Global_73825;
}

void func_54()
{
	Global_2548146.f_258 = 1;
}

void func_55()
{
	Global_2537071.f_4532 = 0;
}

void func_56()
{
	MISC::SET_BIT(&Global_7357, 4);
}

void func_57(int iParam0)
{
	char* sVar0;

	if (func_71())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_1888))
		{
			if (Local_68.f_2[iParam0 /*23*/].f_3 == NETWORK::PARTICIPANT_ID_TO_INT())
			{
				sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 218, true);
				if (!MISC::ARE_STRINGS_EQUAL(sLocal_2602, sVar0))
				{
					sLocal_2602 = sVar0;
					iLocal_2598 = 1;
				}
			}
			if (iLocal_2598 == 1)
			{
				Local_2589 = { func_70() };
				func_68(&uLocal_1889);
				func_67(0, 75, "TXM_EXIT", &uLocal_1889, 0, 361);
				if (Local_68.f_2[iParam0 /*23*/].f_3 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (Local_68.f_2[iParam0 /*23*/].f_7 != 6)
					{
						if (Global_110691 == 1 || bLocal_1874 == 1)
						{
							if (iLocal_1706 > 1)
							{
								func_67(2, 218, "TXM_CDES", &uLocal_1889, 0, 361);
							}
						}
						if (!bLocal_1874)
						{
							if (Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_15 != vLocal_1721[iLocal_1707 /*3*/])
							{
								func_67(0, 176, "TXM_SLCT", &uLocal_1889, 0, 361);
							}
						}
						else if (Local_68.f_2[iParam0 /*23*/].f_7 == 5)
						{
							if (!MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 4))
							{
								func_67(0, 177, "TXM_STOP", &uLocal_1889, 0, 361);
							}
							if (bLocal_1872)
							{
								func_67(0, 176, "TXM_SLCT", &uLocal_1889, 0, 361);
							}
							if (!MISC::IS_BIT_SET(Local_68.f_2[iParam0 /*23*/].f_6, 3) && !MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 3))
							{
								if (Local_68.f_2[iParam0 /*23*/].f_7 == 5)
								{
									func_67(0, 179, "TXM_HURY", &uLocal_1889, 0, 361);
								}
							}
						}
						else if (Local_68.f_2[iParam0 /*23*/].f_7 == 7)
						{
							if (!MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 5))
							{
								func_67(0, 177, "TXM_STRT", &uLocal_1889, 0, 361);
							}
							if (bLocal_1872)
							{
								func_67(0, 176, "TXM_SLCT", &uLocal_1889, 0, 361);
							}
						}
						if (PAD::_IS_USING_KEYBOARD(2))
						{
							func_67(2, 199, "SPEC_PAUSE", &uLocal_1889, 0, 361);
						}
					}
				}
				iLocal_2598 = 0;
			}
			HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
			func_66(1);
			func_65(1);
			func_58(&iLocal_1888, &Local_2589, &uLocal_1889, func_64(&uLocal_1889));
		}
		else
		{
			iLocal_1888 = UNK_0xB01F55A0FD1CFD49("instructional_buttons");
		}
	}
	else
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_1888);
		iLocal_2598 = 1;
	}
}

void func_58(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam3 == 1 || PAD::_0x6CD79468A1E595C6(2))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		func_63(uParam2);
	}
	if (Global_1315716 < 2)
	{
		func_65(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			*iParam0 = UNK_0xB01F55A0FD1CFD49("instructional_buttons");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*iParam0, "CLEAR_ALL");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_693)
			{
				if (MISC::IS_BIT_SET(uParam2->f_689, iVar0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					if (!MISC::IS_BIT_SET(uParam2->f_690, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[iVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[iVar0 /*57*/].f_56;
						func_62(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar2, true));
						if (iVar3 < 361)
						{
							func_62(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[iVar0 /*57*/].f_55;
						func_62(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(iVar4, iVar5, true));
					}
					if (MISC::IS_BIT_SET(uParam2->f_686, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*57*/].f_32));
						if (uParam2->f_694 == iVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*57*/].f_36);
							if (MISC::IS_BIT_SET(uParam2->f_687, iVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (MISC::IS_BIT_SET(uParam2->f_688, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_61(&(uParam2->f_1[iVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						if (MISC::IS_BIT_SET(uParam2->f_691, iVar0))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[iVar0 /*57*/].f_55);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					func_62(&(uParam2->f_1[iVar0 /*57*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[iVar0 /*57*/].f_16)))
					{
						func_62(&(uParam2->f_1[iVar0 /*57*/].f_16));
					}
					if (MISC::IS_BIT_SET(uParam2->f_686, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*57*/].f_32));
						if (uParam2->f_694 == iVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*57*/].f_36);
							if (MISC::IS_BIT_SET(uParam2->f_687, iVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (MISC::IS_BIT_SET(uParam2->f_688, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_61(&(uParam2->f_1[iVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar0++;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_60(*iParam0, uParam1);
	}
	func_59();
}

void func_59()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_60(int iParam0, var uParam1)
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_61(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_62(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_63(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_64(var uParam0)
{
	return uParam0->f_692;
}

void func_65(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_66(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_67(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	MISC::SET_BIT(&(uParam3->f_689), iVar0);
	uParam3->f_1[iVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[iVar0 /*57*/].f_55 = iParam1;
	uParam3->f_1[iVar0 /*57*/].f_56 = iParam5;
	if (bParam4)
	{
		MISC::SET_BIT(&(uParam3->f_691), iVar0);
		if (iParam5 < 361)
		{
		}
	}
	uParam3->f_693++;
}

void func_68(var uParam0)
{
	func_69(uParam0);
	uParam0->f_692 = 1;
}

void func_69(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 361;
		uParam0->f_1[iVar0 /*57*/].f_56 = 361;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

struct<9> func_70()
{
	struct<9> Var0;

	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

int func_71()
{
	if (!func_10(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (!func_76(1, 1))
	{
		return 0;
	}
	if (func_75())
	{
		return 0;
	}
	if (func_53())
	{
		return 0;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return 0;
	}
	if (func_74(0))
	{
		return 0;
	}
	if (!func_72())
	{
		return 0;
	}
	return 1;
}

int func_72()
{
	if (func_73() == 0)
	{
		return 1;
	}
	return 0;
}

int func_73()
{
	return Global_1312467.f_18;
}

bool func_74(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_75()
{
	return Global_98796.f_346 > 0;
}

int func_76(int iParam0, int iParam1)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (func_80())
		{
			return 0;
		}
	}
	if (func_79())
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_52(0))
		{
			return 0;
		}
	}
	if (func_78(8, -1))
	{
		return 0;
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_77())
	{
		return 0;
	}
	if (Global_58693)
	{
		return 0;
	}
	if (Global_73825)
	{
		return 0;
	}
	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (Global_1312791)
	{
		return 0;
	}
	if (Global_1574191)
	{
		return 0;
	}
	return 1;
}

bool func_77()
{
	return Global_1312877;
}

bool func_78(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1377170.f_1048, iParam0);
}

bool func_79()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_196 != 0;
}

bool func_80()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

void func_81(int iParam0)
{
	if (!MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 11))
	{
		if (Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_18 == 0)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_18 = 26;
				Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_19 = iParam0;
				MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 11);
			}
		}
	}
}

void func_82(int iParam0)
{
	if (bLocal_1874)
	{
		if (func_87(&uLocal_1882, 10000, 0))
		{
			if (MISC::IS_BIT_SET(Local_68.f_2[iParam0 /*23*/].f_6, 3) || MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 3))
			{
				fLocal_1884 = (fLocal_1884 + (fLocal_1881 * 1.5f));
			}
			else
			{
				fLocal_1884 = (fLocal_1884 + fLocal_1881);
			}
			func_32(&uLocal_1882);
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vLocal_1885, false) > 50f)
		{
			if (MISC::IS_BIT_SET(Local_68.f_2[iParam0 /*23*/].f_6, 3) || MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 3))
			{
				fLocal_1884 = (fLocal_1884 + (fLocal_1881 * 1.5f));
			}
			else
			{
				fLocal_1884 = (fLocal_1884 + fLocal_1881);
			}
			func_32(&uLocal_1882);
			vLocal_1885 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		}
		iLocal_1879 = SYSTEM::CEIL(fLocal_1884);
		if (iLocal_1879 > 5000)
		{
			iLocal_1879 = 5000;
		}
		if (iLocal_1879 != iLocal_1880)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1713, "SET_TAXI_PRICE");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_1879);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_1880 = iLocal_1879;
			func_85("\ntaxiService currentJourneyPrice = ");
			func_83(iLocal_1879);
			func_85("\n");
		}
	}
}

void func_83(int iParam0)
{
	func_84(iParam0);
}

void func_84(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_85(char* sParam0)
{
	func_86(sParam0);
}

void func_86(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

int func_87(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_37(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_88(int iParam0)
{
	if (Local_68.f_2[iParam0 /*23*/].f_3 == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iParam0 /*23*/]) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iParam0 /*23*/].f_1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_68.f_2[iParam0 /*23*/]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_68.f_2[iParam0 /*23*/].f_1))
			{
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_68.f_2[iParam0 /*23*/], false);
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_68.f_2[iParam0 /*23*/].f_1, false);
				if (MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 10))
				{
					func_146(iParam0);
					func_113(iParam0);
				}
				if (func_112(iParam0))
				{
					func_89(iParam0);
					iLocal_2598 = 1;
				}
			}
			else
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_68.f_2[iParam0 /*23*/]))
				{
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_68.f_2[iParam0 /*23*/], false);
				}
				else if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_68.f_2[iParam0 /*23*/]))
				{
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_68.f_2[iParam0 /*23*/].f_1))
				{
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_68.f_2[iParam0 /*23*/].f_1, false);
				}
			}
		}
	}
	else
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		if (CAM::DOES_CAM_EXIST(iLocal_2600))
		{
			CAM::SET_CAM_ACTIVE(iLocal_2600, false);
			CAM::DESTROY_CAM(iLocal_2600, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			func_40();
		}
	}
}

void func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;

	if (!bLocal_1710)
	{
		iVar0 = func_111();
		iLocal_1709 = iVar0;
		iLocal_1691[iParam0] = 0;
		bLocal_1710 = true;
	}
	if (func_97(iParam0))
	{
		iVar1 = 0;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1713, "CLEAR_TAXI_DISPLAY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iVar1 = 0;
		while (iVar1 < iLocal_1706)
		{
			if (!HUD::DOES_BLIP_EXIST(vLocal_1721[iVar1 /*3*/]))
			{
				bLocal_2599 = true;
				iLocal_1691[iParam0] = 0;
				return;
			}
			if (func_96(vLocal_1721[iVar1 /*3*/]) == -1)
			{
				bLocal_2599 = true;
				iLocal_1691[iParam0] = 0;
				return;
			}
			if (func_95(HUD::GET_BLIP_COORDS(vLocal_1721[iVar1 /*3*/]), 0f, 0f, 0f, 1056964608 /* Float: 0.5f */, 0))
			{
				bLocal_2599 = true;
				iLocal_1691[iParam0] = 0;
				return;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1713, "ADD_TAXI_DESTINATION");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(HUD::GET_BLIP_SPRITE(vLocal_1721[iVar1 /*3*/]));
			if ((func_96(vLocal_1721[iVar1 /*3*/]) == 492 || func_96(vLocal_1721[iVar1 /*3*/]) == 475) && HUD::GET_BLIP_HUD_COLOUR(vLocal_1721[iVar1 /*3*/]) == 0)
			{
				func_94(HUD::GET_BLIP_COLOUR(vLocal_1721[iVar1 /*3*/]), &iVar2, &iVar3, &iVar4, &uVar5);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar4);
			}
			else
			{
				HUD::GET_HUD_COLOUR(HUD::GET_BLIP_HUD_COLOUR(vLocal_1721[iVar1 /*3*/]), &iVar2, &iVar3, &iVar4, &uVar5);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar4);
			}
			iVar9 = func_92(vLocal_1721[iVar1 /*3*/]);
			if (iVar9 == -1)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_BLIP_NAME(vLocal_1721[iVar1 /*3*/]);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_90(iVar9));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			if (HUD::GET_BLIP_INFO_ID_TYPE(vLocal_1721[iVar1 /*3*/]) == 2)
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(vLocal_1721[iVar1 /*3*/]))))
				{
					vVar6 = { ENTITY::GET_ENTITY_COORDS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(vLocal_1721[iVar1 /*3*/])), true) };
				}
			}
			else if (HUD::GET_BLIP_INFO_ID_TYPE(vLocal_1721[iVar1 /*3*/]) == 1)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(vLocal_1721[iVar1 /*3*/]), false))
				{
					vVar6 = { ENTITY::GET_ENTITY_COORDS(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(vLocal_1721[iVar1 /*3*/]), true) };
				}
			}
			else
			{
				vVar6 = { HUD::GET_BLIP_COORDS(vLocal_1721[iVar1 /*3*/]) };
			}
			func_61(ZONE::GET_NAME_OF_ZONE(vVar6));
			if (((((((func_96(vLocal_1721[iVar1 /*3*/]) == 40 || func_96(vLocal_1721[iVar1 /*3*/]) == 357) || func_96(vLocal_1721[iVar1 /*3*/]) == 475) || func_96(vLocal_1721[iVar1 /*3*/]) == 492) || func_96(vLocal_1721[iVar1 /*3*/]) == 557) || func_96(vLocal_1721[iVar1 /*3*/]) == 590) || func_96(vLocal_1721[iVar1 /*3*/]) == 591) || func_96(vLocal_1721[iVar1 /*3*/]) == 614)
			{
				iVar10 = 0;
				while (iVar10 < 126)
				{
					iVar11 = iVar10;
					if (func_11(vVar6, Global_1049922[iVar11 /*1951*/].f_3[0 /*3*/], 0))
					{
						iVar10 = 126;
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM1");
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1049922[iVar11 /*1951*/].f_16));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						func_61("");
					}
					iVar10++;
				}
			}
			else if (vLocal_1721[iVar1 /*3*/].f_2 == 0)
			{
				if (vLocal_1721[iVar1 /*3*/].f_1 != 0)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM1");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(vLocal_1721[iVar1 /*3*/].f_1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_61("");
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM2");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(vLocal_1721[iVar1 /*3*/].f_1);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(vLocal_1721[iVar1 /*3*/].f_2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			if (((iLocal_2603 == 8 || iLocal_2603 == 9) || iLocal_2603 == 10) || iLocal_2603 == 12)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (bLocal_1874)
			{
				if (Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_15 == vLocal_1721[iVar1 /*3*/])
				{
					iLocal_1707 = iVar1;
				}
			}
			else if (HUD::DOES_BLIP_EXIST(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_4))
			{
				if (Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_4 == vLocal_1721[iVar1 /*3*/])
				{
					iLocal_1707 = iVar1;
				}
			}
			iVar1++;
		}
		if (bLocal_1874)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1713, "SHOW_TAXI_DESTINATION");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1713, "HIGHLIGHT_DESTINATION");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_1707);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1713, "SET_TAXI_PRICE");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_1879);
			if (((iLocal_2603 == 8 || iLocal_2603 == 9) || iLocal_2603 == 10) || iLocal_2603 == 12)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1713, "SHOW_TAXI_DESTINATION");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1713, "HIGHLIGHT_DESTINATION");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_1707);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (HUD::DOES_BLIP_EXIST(vLocal_1721[iLocal_1707 /*3*/]))
		{
			vVar12 = { HUD::GET_BLIP_COORDS(vLocal_1721[iLocal_1707 /*3*/]) };
			if ((!func_26(vVar12) && CAM::DOES_CAM_EXIST(iLocal_2600)) && CAM::IS_CAM_ACTIVE(iLocal_2600))
			{
				HUD::LOCK_MINIMAP_POSITION(vVar12.x, vVar12.y);
			}
		}
		bLocal_2599 = false;
		MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 10);
	}
}

char* func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL";
		case 1:
			return "SB_BAR";
		case 2:
			return "SB_BAR";
		case 3:
			return "SB_BAR";
		case 4:
			return "SB_BAR";
		case 5:
			return "SB_BAR";
		case 6:
			return "SB_BAR";
		case 7:
			return func_91(iParam0, 0);
		case 8:
			return func_91(iParam0, 0);
		case 9:
			return func_91(iParam0, 0);
		case 10:
			return func_91(iParam0, 0);
		case 11:
			return func_91(iParam0, 0);
		case 12:
			return func_91(iParam0, 0);
		case 13:
			return func_91(iParam0, 0);
		case 14:
			return func_91(iParam0, 0);
		case 15:
			return func_91(iParam0, 0);
		case 16:
			return func_91(iParam0, 0);
		case 17:
			return func_91(iParam0, 0);
		case 18:
			return func_91(iParam0, 0);
		case 19:
			return func_91(iParam0, 0);
		case 20:
			return func_91(iParam0, 0);
		case 21:
			return func_91(iParam0, 0);
		case 22:
			return "SB_TAT";
		case 23:
			return "SB_TAT";
		case 24:
			return "SB_TAT";
		case 25:
			return "SB_TAT";
		case 26:
			return "SB_TAT";
		case 27:
			return "SB_TAT";
		case 28:
			return "SB_AMU2";
		case 29:
			return "SB_AMU";
		case 30:
			return "SB_AMU";
		case 31:
			return "SB_AMU";
		case 32:
			return "SB_AMU";
		case 33:
			return "SB_AMU";
		case 34:
			return "SB_AMU";
		case 35:
			return "SB_AMU";
		case 36:
			return "SB_AMU";
		case 37:
			return "SB_AMU";
		case 38:
			return "SB_AMU2";
		case 39:
			return func_91(iParam0, 0);
		case 40:
			return func_91(iParam0, 0);
		case 41:
			return func_91(iParam0, 0);
		case 42:
			return func_91(iParam0, 0);
		case 43:
			return func_91(iParam0, 0);
		case 44:
			return func_91(iParam0, 0);
		case 45:
			return func_91(iParam0, 0);
		case 46:
			return "SB_AMU";
		case 47:
			return "SB_AMU";
		case 48:
			return "SB_AMU";
		case 49:
			return "SB_AMU";
		case 52:
			return "SB_AMU";
		case 50:
			return "SB_BAR";
		case 51:
			return "S_CL_BL";
	}
	return "SHOP_BLIP_INV";
}

char* func_91(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
		case 0:
			return "S_H_01";
		case 1:
			return "S_H_02";
		case 2:
			return "S_H_03";
		case 3:
			return "S_H_04";
		case 4:
			return "S_H_05";
		case 5:
			return "S_H_06";
		case 6:
			return "S_H_07";
		case 7:
			return "S_CL_01";
		case 8:
			return "S_CL_02";
		case 9:
			return "S_CL_03";
		case 10:
			return "S_CL_04";
		case 11:
			return "S_CL_05";
		case 12:
			return "S_CL_06";
		case 13:
			return "S_CL_07";
		case 14:
			return "S_CM_01";
		case 15:
			return "S_CM_03";
		case 16:
			return "S_CM_04";
		case 17:
			return "S_CM_05";
		case 18:
			return "S_CH_01";
		case 19:
			return "S_CH_02";
		case 20:
			return "S_CH_03";
		case 21:
			return "S_CA_01";
		case 22:
			return "S_T_01";
		case 23:
			return "S_T_02";
		case 24:
			return "S_T_03";
		case 25:
			return "S_T_04";
		case 26:
			return "S_T_05";
		case 27:
			return "S_T_06";
		case 28:
			return "S_G_01";
		case 29:
			return "S_G_02";
		case 30:
			return "S_G_03";
		case 31:
			return "S_G_04";
		case 32:
			return "S_G_05";
		case 33:
			return "S_G_06";
		case 34:
			return "S_G_07";
		case 35:
			return "S_G_08";
		case 36:
			return "S_G_09";
		case 37:
			return "S_G_10";
		case 38:
			return "S_G_11";
		case 39:
			return "S_MO_01";
		case 40:
			return "S_MO_05";
		case 41:
			return "S_MO_06";
		case 42:
			return "S_MO_07";
		case 43:
			return "S_MO_08";
		case 44:
			return "S_MO_09";
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "S_MO_10";
				case 11:
					return "S_MO_B";
				case 10:
					return "S_MO_T";
				case 12:
					return "S_MO_HA";
				case 13:
					return "S_MO_AOC";
				case 14:
					return "S_MO_AOC";
				case 15:
					return "S_MO_AOC";
				case 16:
					return "S_MO_AOC";
				case 17:
					return "S_MO_AOC";
			}
			return "S_MO_11";
		case 46:
			return "S_G_12";
		case 47:
			return "S_G_13";
		case 48:
			return "S_G_14";
		case 49:
			return "S_G_15";
		case 52:
			return "S_G_16";
		case 50:
			return "S_H_08";
		case 51:
			return "S_CL_09";
	}
	return "SHOP_NAME_EMPTY";
}

int func_92(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 53)
	{
		iVar1 = iVar0;
		iVar2 = func_93(iVar1);
		if (Global_31146[iVar2 /*23*/].f_19 == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 263;
		case 0:
			return 19;
		case 1:
			return 20;
		case 2:
			return 21;
		case 3:
			return 22;
		case 4:
			return 23;
		case 5:
			return 24;
		case 6:
			return 25;
		case 7:
			return 26;
		case 8:
			return 27;
		case 9:
			return 28;
		case 10:
			return 29;
		case 11:
			return 30;
		case 12:
			return 31;
		case 13:
			return 32;
		case 14:
			return 33;
		case 15:
			return 35;
		case 16:
			return 36;
		case 17:
			return 37;
		case 18:
			return 38;
		case 19:
			return 39;
		case 20:
			return 40;
		case 21:
			return 41;
		case 22:
			return 42;
		case 23:
			return 43;
		case 24:
			return 44;
		case 25:
			return 45;
		case 26:
			return 46;
		case 27:
			return 47;
		case 28:
			return 48;
		case 29:
			return 49;
		case 30:
			return 50;
		case 31:
			return 51;
		case 32:
			return 52;
		case 33:
			return 53;
		case 34:
			return 54;
		case 35:
			return 55;
		case 36:
			return 56;
		case 37:
			return 57;
		case 38:
			return 58;
		case 39:
			return 59;
		case 40:
			return 60;
		case 41:
			return 61;
		case 42:
			return 62;
		case 43:
			return 63;
		case 44:
			return 64;
		case 45:
			return 64;
		case 46:
			return 48;
		case 47:
			return 48;
		case 48:
			return 48;
		case 49:
			return 48;
		case 52:
			return 48;
		case 50:
			return 25;
		case 51:
			return 40;
		default:
			break;
	}
	return 263;
}

void func_94(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	*iParam1 = MISC::GET_BITS_IN_RANGE(iParam0, 24, 31);
	*iParam2 = MISC::GET_BITS_IN_RANGE(iParam0, 16, 23);
	*iParam3 = MISC::GET_BITS_IN_RANGE(iParam0, 8, 15);
	*uParam4 = MISC::GET_BITS_IN_RANGE(iParam0, 0, 7);
}

int func_95(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
		{
			if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
			{
				if (MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_96(int iParam0)
{
	int iVar0;

	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		iVar0 = HUD::GET_BLIP_SPRITE(iParam0);
	}
	return iVar0;
}

int func_97(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	switch (iLocal_1691[iParam0])
	{
		case 0:
			func_34(iParam0);
			break;
		case 1:
			func_98(iParam0, bLocal_66, 0);
			func_98(iParam0, 77, 0);
			func_98(iParam0, 79, 0);
			func_98(iParam0, 293, 0);
			func_98(iParam0, bLocal_67, 0);
			func_98(iParam0, 225, 0);
			func_98(iParam0, 348, 0);
			break;
		case 2:
			func_98(iParam0, 110, 1);
			break;
		case 3:
			func_98(iParam0, 119, 1);
			func_98(iParam0, 103, 1);
			break;
		case 4:
			func_98(iParam0, 122, 1);
			func_98(iParam0, 109, 1);
			break;
		case 5:
			func_98(iParam0, 311, 1);
			func_98(iParam0, 90, 1);
			break;
		case 6:
			func_98(iParam0, 304, 1);
			break;
		case 7:
			func_98(iParam0, 310, 1);
			break;
		case 8:
			func_98(iParam0, 309, 1);
			break;
		case 9:
			func_98(iParam0, 176, 1);
			break;
		case 10:
			func_98(iParam0, 305, 1);
			break;
		case 11:
			func_98(iParam0, 84, 1);
			break;
		case 12:
			func_98(iParam0, 94, 1);
			break;
		case 13:
			func_98(iParam0, 52, 1);
			break;
		case 14:
			func_98(iParam0, 135, 1);
			break;
		case 15:
			func_98(iParam0, 40, 0);
			func_98(iParam0, 357, 0);
			func_98(iParam0, 475, 0);
			func_98(iParam0, 492, 0);
			func_98(iParam0, 473, 0);
			func_98(iParam0, 496, 0);
			func_98(iParam0, 497, 0);
			func_98(iParam0, 498, 0);
			func_98(iParam0, 499, 0);
			func_98(iParam0, 557, 0);
			func_98(iParam0, 590, 0);
			func_98(iParam0, 591, 0);
			func_98(iParam0, 500, 0);
			func_98(iParam0, 614, 0);
			break;
		case 16:
			func_98(iParam0, 121, 1);
			break;
		case 17:
			func_98(iParam0, 71, 1);
			break;
		case 18:
			func_98(iParam0, 72, 1);
			break;
		case 19:
			func_98(iParam0, 446, 1);
			break;
		case 20:
			func_98(iParam0, 73, 1);
			break;
		case 21:
			func_98(iParam0, 75, 1);
			break;
		case 22:
			iLocal_1709 = func_111();
			if (HUD::DOES_BLIP_EXIST(vLocal_1721[iLocal_1707 /*3*/]))
			{
				iVar0 = 0;
				while (iVar0 < 50)
				{
					if (HUD::DOES_BLIP_EXIST(vLocal_1721[iVar0 /*3*/]))
					{
						if (vLocal_1721[iLocal_1707 /*3*/] == vLocal_1721[iVar0 /*3*/])
						{
							if (func_11(HUD::GET_BLIP_COORDS(vLocal_1721[iLocal_1707 /*3*/]), HUD::GET_BLIP_COORDS(vLocal_1721[iVar0 /*3*/]), 0))
							{
								vVar2 = { HUD::GET_BLIP_COORDS(vLocal_1721[iVar0 /*3*/]) };
								if ((!func_26(vVar2) && CAM::DOES_CAM_EXIST(iLocal_2600)) && CAM::IS_CAM_ACTIVE(iLocal_2600))
								{
									HUD::LOCK_MINIMAP_POSITION(vVar2.x, vVar2.y);
								}
								iLocal_1707 = iVar0;
								iVar0 = 50;
								iVar1 = 1;
							}
						}
					}
					iVar0++;
				}
				if (iVar1 == 0)
				{
					iLocal_1707 = 0;
				}
			}
			else
			{
				iLocal_1707 = 0;
			}
			break;
	}
	if (iLocal_1691[iParam0] >= 22)
	{
		return 1;
	}
	else
	{
		iLocal_1691[iParam0]++;
	}
	return 0;
}

void func_98(int iParam0, bool bParam1, int iParam2)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	vector3 vVar5;
	int iVar8;

	iVar4 = HUD::GET_FIRST_BLIP_INFO_ID(bParam1);
	while (HUD::DOES_BLIP_EXIST(iVar4))
	{
		if (iLocal_1706 < 50)
		{
			if (func_110(iVar4))
			{
				if (func_109(vVar0))
				{
					if (!func_108(&iVar4))
					{
						bVar3 = false;
						switch (bParam1)
						{
							case 77:
							case 79:
							case 293:
							case 225:
							case 348:
							case 90:
							case 109:
							case 122:
							case 119:
							case 311:
							case 103:
							case 279:
							case 304:
							case 310:
							case 309:
							case 38:
							case 176:
							case 305:
							case 84:
							case 94:
							case 126:
							case 52:
							case 99:
							case 102:
							case 135:
							case 136:
							case 40:
							case 357:
							case 110:
							case 121:
							case 71:
							case 72:
							case 446:
							case 73:
							case 111:
							case 75:
							case 475:
							case 473:
							case 492:
							case 496:
							case 497:
							case 498:
							case 499:
							case 500:
							case 557:
							case 590:
							case 591:
							case 614:
							case default:
						}
						bVar3 = true;
						vVar5 = { HUD::GET_BLIP_COORDS(iVar4) };
						if (Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 16)
						{
							if (bParam1 == 110)
							{
								if (vVar5.y < 200f)
								{
									bVar3 = true;
								}
								else
								{
									bVar3 = false;
								}
							}
						}
						if (bParam1 == bLocal_67)
						{
							bVar3 = true;
						}
						if (func_11(vVar5, 0f, 0f, 0f, 0))
						{
							bVar3 = false;
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vVar5, 250f, 250f, 250f, false, true, 0))
						{
							bVar3 = false;
						}
						else if (bParam1 != bLocal_67)
						{
							iVar8 = 0;
							while (iVar8 < 1)
							{
								if (func_107(vVar5, Global_2537071.f_238[iVar8 /*3*/], 200f, 1) && !func_11(Global_2537071.f_238[iVar8 /*3*/], 0f, 0f, 0f, 0))
								{
									bVar3 = false;
								}
								iVar8++;
							}
						}
						if (bVar3)
						{
							bVar3 = false;
							if (func_110(iVar4))
							{
								if ((((HUD::GET_BLIP_INFO_ID_TYPE(iVar4) == 4 || HUD::GET_BLIP_INFO_ID_TYPE(iVar4) == 5) || HUD::GET_BLIP_INFO_ID_TYPE(iVar4) == 1) || HUD::GET_BLIP_INFO_ID_TYPE(iVar4) == 6) || HUD::GET_BLIP_INFO_ID_TYPE(iVar4) == 3)
								{
									bVar3 = true;
								}
							}
							if (bVar3)
							{
								if (func_110(iVar4))
								{
									func_106(iParam0, &iVar4, &vVar0);
									func_99(vVar0, iParam2, iParam0);
								}
							}
						}
					}
				}
			}
		}
		iVar4 = HUD::GET_NEXT_BLIP_INFO_ID(bParam1);
	}
}

void func_99(vector3 vParam0, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (func_96(vLocal_1721[iVar0 /*3*/]) == func_96(vParam0.x))
		{
			iVar1 = iVar0;
			iVar0 = 50;
		}
		else if (iVar0 == iLocal_1706)
		{
			iVar1 = iVar0;
			iVar0 = 50;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (iVar0 < iVar1)
		{
			iVar0 = iVar1;
		}
		if (iVar0 < iLocal_1706)
		{
			if (func_96(vLocal_1721[iVar0 /*3*/]) == func_96(vParam0.x))
			{
				if (func_103(vParam0, vLocal_1721[iVar0 /*3*/]))
				{
					if (bParam3)
					{
						func_102(vParam0, iVar0, iParam4);
						iVar0 = 50;
						return;
					}
					else
					{
						func_100(vParam0, iVar0, iParam4);
						iLocal_1706++;
						iVar0 = 50;
						return;
					}
				}
				else if (bParam3)
				{
					iVar0 = 50;
					return;
				}
				else
				{
					func_100(vParam0, iVar0, iParam4);
					iLocal_1706++;
					iVar0 = 50;
					return;
				}
			}
			else
			{
				func_100(vParam0, iVar0, iParam4);
				iLocal_1706++;
				iVar0 = 50;
				return;
			}
		}
		else
		{
			func_100(vParam0, iVar0, iParam4);
			iLocal_1706++;
			iVar0 = 50;
			return;
		}
		iVar0++;
	}
}

void func_100(vector3 vParam0, int iParam3, int iParam4)
{
	func_85("INSERT_NEW_DESTINATION_TO_LIST - start \n");
	func_101(iParam3);
	vLocal_1721[iParam3 /*3*/] = { vParam0 };
	if (func_96(vLocal_1721[iParam3 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
	{
		if (Local_68.f_2[iParam4 /*23*/].f_3 != -1)
		{
			Local_263[Local_68.f_2[iParam4 /*23*/].f_3 /*44*/].f_4.f_35 = iParam3;
			Local_263[Local_68.f_2[iParam4 /*23*/].f_3 /*44*/].f_4.f_36 = { HUD::GET_BLIP_COORDS(vLocal_1721[iParam3 /*3*/]) };
		}
	}
}

void func_101(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	func_85("SHIFT_LIST_DOWN_1_PLACE_FROM_POSITION - start, position = ");
	func_83(iParam0);
	func_85("\n");
	iVar0 = 49;
	while (iVar0 > iParam0)
	{
		vVar1 = { vLocal_1721[(iVar0 - 1) /*3*/] };
		vLocal_1721[iVar0 /*3*/] = { vVar1 };
		iVar0 = (iVar0 - 1);
	}
}

void func_102(vector3 vParam0, int iParam3, int iParam4)
{
	func_85("REPLACE_LIST_DESTINATION_WITH_NEW_DESTINATION - start \n");
	vLocal_1721[iParam3 /*3*/] = { vParam0 };
	if (func_96(vLocal_1721[iParam3 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
	{
		if (Local_68.f_2[iParam4 /*23*/].f_3 != -1)
		{
			Local_263[Local_68.f_2[iParam4 /*23*/].f_3 /*44*/].f_4.f_35 = iParam3;
			Local_263[Local_68.f_2[iParam4 /*23*/].f_3 /*44*/].f_4.f_36 = { HUD::GET_BLIP_COORDS(vLocal_1721[iParam3 /*3*/]) };
		}
	}
}

int func_103(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5)
{
	if (func_104(iParam0) < func_104(iParam3))
	{
		return 1;
	}
	return 0;
}

float func_104(int iParam0)
{
	vector3 vVar0;

	vVar0 = { 0f, 0f, 1E+07f };
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (HUD::DOES_BLIP_EXIST(iParam0))
		{
			vVar0 = { func_105(iParam0) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
	}
	return SYSTEM::VMAG(vVar0);
}

Vector3 func_105(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	vVar0 = { 0f, 0f, 0f };
	iVar7 = HUD::GET_BLIP_INFO_ID_TYPE(iParam0);
	if (iVar7 == 1)
	{
		iVar3 = HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, false))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar3, true) };
		}
	}
	else if (iVar7 == 2)
	{
		iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0));
		if (!PED::IS_PED_INJURED(iVar4))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar4, true) };
		}
	}
	else if (iVar7 == 3)
	{
		iVar5 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0));
		if (ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar5, true) };
		}
	}
	else if (iVar7 == 4)
	{
		vVar0 = { HUD::GET_BLIP_COORDS(iParam0) };
	}
	else if (iVar7 == 6)
	{
		iVar6 = HUD::GET_BLIP_INFO_ID_PICKUP_INDEX(iParam0);
		if (OBJECT::DOES_PICKUP_EXIST(iVar6))
		{
			vVar0 = { OBJECT::GET_PICKUP_COORDS(iVar6) };
		}
	}
	else if (iVar7 == 5)
	{
		vVar0 = { HUD::GET_BLIP_COORDS(iParam0) };
	}
	return vVar0;
}

void func_106(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = *iParam1;
	if (!*uParam2 == Global_110674)
	{
		PATHFIND::GET_STREET_NAME_AT_COORD(func_105(*uParam2), &(uParam2->f_1), &(uParam2->f_2));
	}
	else
	{
		PATHFIND::GET_STREET_NAME_AT_COORD(Local_68.f_2[iParam0 /*23*/].f_8, &(uParam2->f_1), &(uParam2->f_2));
	}
}

bool func_107(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vParam3, bParam7) <= fParam6;
}

int func_108(int iParam0)
{
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		return 1;
	}
	if (Global_110671 == *iParam0)
	{
		return 1;
	}
	if (HUD::GET_BLIP_COLOUR(*iParam0) == 39)
	{
		return 1;
	}
	if (func_11(HUD::GET_BLIP_COORDS(*iParam0), 0f, 0f, 0f, 0))
	{
		return 1;
	}
	if (func_96(*iParam0) == -1)
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0, var uParam1, var uParam2)
{
	float fVar0;

	if (!func_96(iParam0) == bLocal_66)
	{
		fVar0 = func_104(iParam0);
		if (fVar0 > 40f)
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)
{
	int iVar0;

	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		iVar0 = HUD::GET_BLIP_INFO_ID_DISPLAY(iParam0);
		if (!iVar0 == 0 && !iVar0 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_111()
{
	int iVar0;

	iVar0 = HUD::GET_NUMBER_OF_ACTIVE_BLIPS();
	if (MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 12))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

bool func_112(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;

	if (SYSTEM::TIMERB() > 500)
	{
		iVar4 = LOCALIZATION::GET_CURRENT_LANGUAGE();
		if (iLocal_2603 != iVar4)
		{
			if (((iLocal_2603 == 8 || iLocal_2603 == 9) || iLocal_2603 == 10) || iLocal_2603 == 12)
			{
				if (((iVar4 != 8 && iVar4 != 9) && iVar4 != 10) && iVar4 != 12)
				{
					iLocal_2603 = iVar4;
					bLocal_2599 = true;
					iLocal_1691[iParam0] = 0;
					SYSTEM::SETTIMERB(0);
				}
			}
			else if (((iVar4 == 8 || iVar4 == 9) || iVar4 == 10) || iVar4 == 12)
			{
				iLocal_2603 = iVar4;
				bLocal_2599 = true;
				iLocal_1691[iParam0] = 0;
				SYSTEM::SETTIMERB(0);
			}
		}
		if (!bLocal_2599)
		{
			iVar5 = func_111();
			if (iLocal_1709 != iVar5)
			{
				bLocal_2599 = true;
				iLocal_1691[iParam0] = 0;
				iLocal_1709 = iVar5;
				SYSTEM::SETTIMERB(0);
			}
		}
		if (!bLocal_2599)
		{
			if (Local_68.f_2[iParam0 /*23*/].f_3 != -1)
			{
				if (Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 == -1)
				{
					iVar3 = HUD::GET_FIRST_BLIP_INFO_ID(HUD::GET_WAYPOINT_BLIP_ENUM_ID());
					if (HUD::DOES_BLIP_EXIST(iVar3))
					{
						vVar0 = { HUD::GET_BLIP_COORDS(iVar3) };
						if (SYSTEM::VDIST(vVar0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 250f)
						{
							bLocal_2599 = true;
							iLocal_1691[iParam0] = 0;
							Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 = -1;
							Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_36 = { 0f, 0f, 0f };
							SYSTEM::SETTIMERB(0);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(vLocal_1721[Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 /*3*/]))
				{
					if (func_96(vLocal_1721[Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
					{
						vVar0 = { HUD::GET_BLIP_COORDS(vLocal_1721[Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 /*3*/]) };
						if (!func_11(vVar0, Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_36, 0))
						{
							bLocal_2599 = true;
							iLocal_1691[iParam0] = 0;
							Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 = -1;
							Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_36 = { 0f, 0f, 0f };
							SYSTEM::SETTIMERB(0);
						}
					}
					else
					{
						bLocal_2599 = true;
						iLocal_1691[iParam0] = 0;
						Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 = -1;
						Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_36 = { 0f, 0f, 0f };
						SYSTEM::SETTIMERB(0);
					}
				}
				else
				{
					bLocal_2599 = true;
					iLocal_1691[iParam0] = 0;
					Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_35 = -1;
					Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_36 = { 0f, 0f, 0f };
					SYSTEM::SETTIMERB(0);
				}
			}
		}
		SYSTEM::SETTIMERB(0);
	}
	return bLocal_2599;
}

void func_113(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	if (func_71())
	{
		if (bLocal_2599 == 0)
		{
			func_145(&iVar0, &uVar1, &uVar2, &uVar3, 0);
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				PAD::SET_INPUT_EXCLUSIVE(2, 241);
				PAD::SET_INPUT_EXCLUSIVE(2, 242);
				PAD::SET_INPUT_EXCLUSIVE(2, 180);
				PAD::SET_INPUT_EXCLUSIVE(2, 181);
			}
			if (iVar0 > 28 || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 180))
			{
				if (!bLocal_1875)
				{
					func_143();
					SYSTEM::SETTIMERA(0);
					bLocal_1875 = true;
				}
			}
			else
			{
				bLocal_1875 = false;
			}
			if (iVar0 < -28 || PAD::IS_CONTROL_JUST_PRESSED(2, 181))
			{
				if (!bLocal_1876)
				{
					func_141();
					SYSTEM::SETTIMERA(0);
					bLocal_1876 = true;
				}
			}
			else
			{
				bLocal_1876 = false;
			}
		}
		if (!bLocal_1874)
		{
			if (iLocal_1706 > 0)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
				if (bLocal_2599 == 0)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 176))
					{
						if (HUD::DOES_BLIP_EXIST(vLocal_1721[iLocal_1707 /*3*/]))
						{
							if (func_140(HUD::GET_BLIP_COORDS(vLocal_1721[iLocal_1707 /*3*/])))
							{
								bLocal_1877 = false;
								Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_15 = { vLocal_1721[iLocal_1707 /*3*/] };
								Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_5 = { HUD::GET_BLIP_COORDS(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_15) };
								vLocal_1885 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
								func_32(&uLocal_1882);
								func_82(iParam0);
								bLocal_1874 = true;
								if (iLocal_2601 != 5)
								{
									CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_2601);
								}
								bLocal_1877 = false;
								bLocal_1872 = false;
								bLocal_1873 = true;
								iLocal_2598 = 1;
								func_116(2, iParam0);
								MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 4);
								MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 20);
								MISC::CLEAR_BIT(&(Local_68.f_2[iParam0 /*23*/].f_6), 3);
							}
							else
							{
								func_116(27, iParam0);
							}
						}
					}
				}
			}
			if (!MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 7) && bLocal_1874 == 0)
			{
				iLocal_2598 = 1;
				func_116(1, iParam0);
				MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 7);
			}
		}
		else
		{
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
			if (!MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 4) && Local_68.f_2[iParam0 /*23*/].f_7 == 5)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, 177))
				{
					MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 4);
					MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 5);
					iLocal_2598 = 1;
					func_116(24, iParam0);
				}
			}
			else if (!MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 5) && Local_68.f_2[iParam0 /*23*/].f_7 == 7)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, 177))
				{
					MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 5);
					MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 4);
					iLocal_2598 = 1;
					func_116(25, iParam0);
				}
			}
			if (!MISC::IS_BIT_SET(Local_68.f_2[iParam0 /*23*/].f_6, 3) && !MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 3))
			{
				if (Local_68.f_2[iParam0 /*23*/].f_7 == 5 && !MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 4))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 99, true);
					PAD::DISABLE_CONTROL_ACTION(0, 100, true);
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 179))
					{
						func_116(20, iParam0);
						func_115(iParam0, 0, 0);
						iLocal_2598 = 1;
						MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 3);
					}
				}
			}
			if (bLocal_1872)
			{
				if (func_114())
				{
					if (bLocal_2599 == 0)
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(0, 176))
						{
							if (HUD::DOES_BLIP_EXIST(vLocal_1721[iLocal_1707 /*3*/]))
							{
								if (func_140(HUD::GET_BLIP_COORDS(vLocal_1721[iLocal_1707 /*3*/])))
								{
									func_116(9, iParam0);
									if (iLocal_2601 != 5)
									{
										CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_2601);
									}
									bLocal_1877 = false;
									bLocal_1872 = false;
									bLocal_1873 = true;
									Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_15 = { vLocal_1721[iLocal_1707 /*3*/] };
									Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_5 = { HUD::GET_BLIP_COORDS(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_15) };
									Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_30 = { 0f, 0f, 0f };
									Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_33 = 0f;
									Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_34 = -1;
									MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 4);
									MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 20);
									func_115(iParam0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_2598 = 1;
								}
								else
								{
									func_116(27, iParam0);
								}
							}
						}
					}
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					if (iLocal_2601 != 5)
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_2601);
					}
					bLocal_1877 = false;
					bLocal_1872 = false;
					bLocal_1873 = true;
				}
			}
			else if (!bLocal_1873)
			{
				if (SYSTEM::TIMERA() > 0)
				{
					if (iLocal_2601 != 5)
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_2601);
					}
					bLocal_1872 = false;
					bLocal_1877 = false;
					bLocal_1873 = true;
				}
			}
		}
	}
	else
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	HUD::SET_TEXT_RENDER_ID(iLocal_1708);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), false))
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_1713, fLocal_1717, fLocal_1718, fLocal_1715, fLocal_1716, 0, 0, 0, 255, 0);
	}
}

int func_114()
{
	if (CAM::DOES_CAM_EXIST(iLocal_2600))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_2600))
		{
			return 1;
		}
	}
	if (bLocal_1872 || !bLocal_1873)
	{
		return 1;
	}
	return 0;
}

void func_115(int iParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iParam0 /*23*/].f_1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_68.f_2[iParam0 /*23*/].f_1))
		{
			if (!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1)))
			{
				if (bParam2)
				{
					TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1));
				}
				if (bParam1)
				{
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1));
				}
				else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1));
						}
					}
				}
			}
		}
	}
}

void func_116(int iParam0, int iParam1)
{
	if (!func_15(Local_68.f_2[iParam1 /*23*/].f_1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_68.f_2[iParam1 /*23*/].f_1))
		{
			if (!func_139())
			{
				if (iParam0 != 0)
				{
					func_20(&uLocal_2621, 8, NETWORK::NET_TO_PED(Local_68.f_2[iParam1 /*23*/].f_1), "FM_TAXI", 0, 1);
					if (func_10(PLAYER::PLAYER_ID(), 1, 1))
					{
						TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_68.f_2[iParam1 /*23*/].f_1), PLAYER::PLAYER_PED_ID(), 4000, 0, 2);
					}
					switch (iParam0)
					{
						case 1:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_WT", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						case 2:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_BJ", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						case 5:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						case 7:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_NM", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						case 9:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_CD", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						case 12:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_RA", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						case 13:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_OE", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						case 24:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_SR", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						case 25:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_ST", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						case 26:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_DB", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						case 27:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_US", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						case 20:
							func_117(&uLocal_2621, "MPTXIAU", "MPTXI_SO", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					}
				}
			}
			else
			{
				iParam0 = 0;
			}
		}
	}
}

int func_117(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_138(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 1;
	return func_118(sParam2, iParam3, 0);
}

int func_118(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_137();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_78(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_136();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			MISC::CLEAR_BIT(&Global_7356, 20);
			MISC::CLEAR_BIT(&Global_7357, 17);
			MISC::CLEAR_BIT(&Global_7358, 0);
			if (bParam2)
			{
				func_128();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_127())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_126())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
					case 8:
						return 0;
					case 9:
						break;
					case 10:
						break;
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_7356, 9))
				{
					return 0;
				}
			}
			func_125();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_124();
		func_119();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_137();
	}
	return 0;
}

void func_119()
{
	if (!func_120())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703108.f_1), {Global_20424}, 4);
		Global_1703108 = Global_6671;
		Global_1703108.f_6 = Global_20815;
	}
}

int func_120()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_123())
	{
		return 0;
	}
	if (func_121(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_121(int iParam0)
{
	return func_122(iParam0, 20);
}

bool func_122(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_123()
{
	return -1;
}

void func_124()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_20805 = 1;
}

void func_125()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	MISC::CLEAR_BIT(&Global_7357, 16);
}

int func_126()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_127()
{
	int iVar0;
	int iVar1;

	if (Global_76622)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_128()
{
	if (func_135(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_129();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76622)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

int func_129()
{
	func_130();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_130()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_133(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_132(PLAYER::PLAYER_PED_ID());
			if (func_131(iVar0) && (!func_135(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_131(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = iVar0;
				Global_111638.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111638.f_2358.f_539.f_4321 != 145)
			{
				Global_111638.f_2358.f_539.f_4323 = Global_111638.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111638.f_2358.f_539.f_4321 = 145;
}

bool func_131(int iParam0)
{
	return iParam0 < 3;
}

int func_132(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_133(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_133(int iParam0)
{
	if (func_131(iParam0))
	{
		return func_134(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_134(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_135(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_136()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

void func_137()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_20805 = 6;
		return;
	}
}

void func_138(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

int func_139()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_140(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!func_26(Global_2537071.f_238[iVar0 /*3*/]))
		{
			if (func_107(vParam0, Global_2537071.f_238[iVar0 /*3*/], 200f, 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_141()
{
	if (bLocal_1874)
	{
		if (bLocal_1872)
		{
			func_142();
		}
		else if (!CAM::IS_CAM_ACTIVE(iLocal_2600))
		{
			bLocal_1877 = true;
			iLocal_2598 = 1;
		}
		else
		{
			func_142();
		}
		bLocal_1872 = true;
		bLocal_1873 = true;
	}
	else
	{
		func_142();
	}
}

void func_142()
{
	vector3 vVar0;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1713, "SET_INPUT_EVENT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_1707++;
	if (iLocal_1707 > (iLocal_1706 - 1))
	{
		iLocal_1707 = 0;
	}
	if (HUD::DOES_BLIP_EXIST(vLocal_1721[iLocal_1707 /*3*/]))
	{
		vVar0 = { HUD::GET_BLIP_COORDS(vLocal_1721[iLocal_1707 /*3*/]) };
		if (!func_26(vVar0))
		{
			HUD::LOCK_MINIMAP_POSITION(vVar0.x, vVar0.y);
		}
	}
}

void func_143()
{
	if (bLocal_1874)
	{
		if (bLocal_1872)
		{
			func_144();
		}
		else if (!CAM::IS_CAM_ACTIVE(iLocal_2600))
		{
			bLocal_1877 = true;
			iLocal_2598 = 1;
		}
		else
		{
			func_144();
		}
		bLocal_1872 = true;
		bLocal_1873 = true;
	}
	else
	{
		func_144();
	}
}

void func_144()
{
	vector3 vVar0;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1713, "SET_INPUT_EVENT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_1707 = (iLocal_1707 - 1);
	if (iLocal_1707 < 0)
	{
		iLocal_1707 = (iLocal_1706 - 1);
		if (iLocal_1707 < 0)
		{
			iLocal_1707 = 0;
		}
	}
	if (HUD::DOES_BLIP_EXIST(vLocal_1721[iLocal_1707 /*3*/]))
	{
		vVar0 = { HUD::GET_BLIP_COORDS(vLocal_1721[iLocal_1707 /*3*/]) };
		if (!func_26(vVar0))
		{
			HUD::LOCK_MINIMAP_POSITION(vVar0.x, vVar0.y);
		}
	}
}

void func_145(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	*iParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*iParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*iParam0) == 0f && IntToFloat(*iParam1) == 0f)
		{
			*iParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*iParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

void func_146(int iParam0)
{
	if (func_13(Local_68.f_2[iParam0 /*23*/]))
	{
		if (!CAM::DOES_CAM_EXIST(iLocal_2600))
		{
			if ((!func_153() && !func_78(8, -1)) && Local_68.f_2[iParam0 /*23*/].f_7 != 6)
			{
				iLocal_2600 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_2600, NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), vLocal_2610, true);
				func_149(iParam0);
				CAM::_0x661B5C8654ADD825(iLocal_2600, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(true);
				iLocal_2598 = 1;
				Global_110691 = 1;
			}
		}
		else if (bLocal_1874)
		{
			if (!Global_110691)
			{
				if (bLocal_1877)
				{
					if (!CAM::IS_CAM_ACTIVE(iLocal_2600))
					{
						iLocal_2601 = CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL();
						if (iLocal_2601 != 5)
						{
							if (CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() != 4)
							{
								CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(4);
							}
						}
						func_41(4, 1, -1);
						func_148();
						Global_110691 = 1;
						CAM::SET_CAM_ACTIVE(iLocal_2600, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(true);
						func_149(iParam0);
						iLocal_2598 = 1;
						bLocal_1877 = false;
						Global_110691 = 1;
					}
				}
			}
			if ((((CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() == 4 && !PAD::IS_CONTROL_JUST_PRESSED(2, 23)) && !func_153()) && !func_78(8, -1)) && Local_68.f_2[iParam0 /*23*/].f_7 != 6)
			{
				if (CAM::IS_CAM_ACTIVE(iLocal_2600))
				{
					func_149(iParam0);
				}
			}
			else if ((CAM::IS_CAM_ACTIVE(iLocal_2600) && !func_153()) && !func_78(8, -1))
			{
				CAM::SET_CAM_ACTIVE(iLocal_2600, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				if (iLocal_2601 != 5)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_2601);
				}
				bLocal_1877 = false;
				bLocal_1872 = false;
				bLocal_1873 = true;
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
				Global_110691 = 0;
				HUD::UNLOCK_MINIMAP_POSITION();
				HUD::UNLOCK_MINIMAP_ANGLE();
				HUD::SET_RADAR_ZOOM(0);
				iLocal_2598 = 1;
				func_147();
			}
		}
		else if (CAM::IS_CAM_ACTIVE(iLocal_2600))
		{
			func_149(iParam0);
		}
	}
}

void func_147()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_1706)
	{
		if (bLocal_1874)
		{
			if (iLocal_63 == vLocal_1721[iVar0 /*3*/])
			{
				iLocal_1707 = iVar0;
			}
		}
		iVar0++;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1713, "HIGHLIGHT_DESTINATION");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_1707);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_148()
{
	if (!func_26(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_5))
	{
		if (CAM::DOES_CAM_EXIST(iLocal_2600) && CAM::IS_CAM_ACTIVE(iLocal_2600))
		{
			HUD::LOCK_MINIMAP_POSITION(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_5, Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_5.f_1);
			HUD::LOCK_MINIMAP_ANGLE(0);
			HUD::SET_RADAR_ZOOM(1400);
		}
	}
}

void func_149(int iParam0)
{
	if (CAM::DOES_CAM_EXIST(iLocal_2600))
	{
		func_150(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), &iLocal_2600, vLocal_2614);
		CAM::SET_CAM_FOV(iLocal_2600, fLocal_2613);
		CAM::SET_CAM_NEAR_CLIP(iLocal_2600, 0.01f);
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (!MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 13))
		{
			MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 13);
		}
	}
	else if (MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 13))
	{
		func_148();
		MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 13);
	}
	HUD::DONT_TILT_MINIMAP_THIS_FRAME();
	CAM::_0x62ECFCFDEE7885D6();
}

void func_150(int iParam0, int iParam1, vector3 vParam2)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (CAM::DOES_CAM_EXIST(*iParam1))
		{
			vVar0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
			fVar5 = vVar0.y;
			vVar6 = { func_152(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vParam2) - ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vLocal_2610)) };
			func_151(vVar6, &fVar3, &fVar4, 1);
			CAM::SET_CAM_ROT(*iParam1, fVar3, fVar5, fVar4, 2);
		}
	}
}

void func_151(vector3 vParam0, int iParam3, float fParam4, int iParam5)
{
	float fVar0;

	if (vParam0.y != 0f)
	{
		*fParam4 = MISC::ATAN2(vParam0.x, vParam0.y);
	}
	else if (vParam0.x < 0f)
	{
		*fParam4 = -90f;
	}
	else
	{
		*fParam4 = 90f;
	}
	if (iParam5 == 1)
	{
		*fParam4 = (*fParam4 * -1f);
		if (*fParam4 < 0f)
		{
			*fParam4 = (*fParam4 + 360f);
		}
	}
	fVar0 = SYSTEM::SQRT(((vParam0.x * vParam0.x) + (vParam0.y * vParam0.y)));
	if (fVar0 != 0f)
	{
		*iParam3 = MISC::ATAN2(vParam0.z, fVar0);
	}
	else if (vParam0.z < 0f)
	{
		*iParam3 = -90f;
	}
	else
	{
		*iParam3 = 90f;
	}
}

Vector3 func_152(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

bool func_153()
{
	return Global_22209;
}

void func_154(int iParam0)
{
	var uVar0;

	if ((((Local_68.f_2[iParam0 /*23*/].f_7 == 2 || Local_68.f_2[iParam0 /*23*/].f_7 == 4) || Local_68.f_2[iParam0 /*23*/].f_7 == 5) || Local_68.f_2[iParam0 /*23*/].f_7 == 6) || Local_68.f_2[iParam0 /*23*/].f_7 == 7)
	{
		if (!MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 2))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])))
			{
				if (Local_68.f_2[iParam0 /*23*/].f_3 != -1 && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_68.f_2[iParam0 /*23*/].f_3)))
				{
					if (Local_68.f_2[iParam0 /*23*/].f_3 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						if (ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])) > 5f)
						{
							func_116(12, iParam0);
							if (iLocal_1879 > iLocal_1878)
							{
								if (!PED::IS_PED_BEING_JACKED(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_68.f_2[iParam0 /*23*/].f_3)))))
								{
									MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_3), iParam0);
									PLAYER::REPORT_CRIME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_68.f_2[iParam0 /*23*/].f_3)), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(2));
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_175("TXI_HWRUN", -1);
									}
								}
							}
						}
						else if (iLocal_1879 > iLocal_1878)
						{
							if (func_172(PLAYER::PLAYER_ID()) >= iLocal_1879 && MONEY::NETWORK_CAN_SPEND_MONEY(iLocal_1879, false, false, true, -1, 0))
							{
								if (Local_68.f_2[iParam0 /*23*/].f_7 == 6)
								{
									func_116(5, iParam0);
								}
								else
								{
									func_116(13, iParam0);
								}
								if (func_171())
								{
									func_158(-1834046564, iLocal_1879, &uVar0, 0, 1, 0);
								}
								else
								{
									func_155(-iLocal_1879, 0);
									MONEY::NETWORK_SPENT_TAXI(iLocal_1879, false, true);
								}
							}
							else
							{
								func_116(7, iParam0);
								if (!PED::IS_PED_BEING_JACKED(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_68.f_2[iParam0 /*23*/].f_3)))))
								{
									MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_3), iParam0);
									PLAYER::REPORT_CRIME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_68.f_2[iParam0 /*23*/].f_3)), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(2));
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_175("TXI_HNMON", -1);
									}
								}
							}
						}
						else
						{
							func_116(13, iParam0);
						}
						MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 2);
						func_32(&uLocal_1703);
					}
				}
			}
		}
	}
}

void func_155(int iParam0, int iParam1)
{
	func_157(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_156(iParam0, 0);
	}
}

void func_156(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_157(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_211.f_4 = iVar1;
	Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_211.f_3 = (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_156(iVar1, 0);
	}
}

void func_158(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_171())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_159(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_159(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_159(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
			func_159(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_159(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	bVar0 = false;
	if (!func_171())
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_170()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263954[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || bVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || bVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_166(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (bVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263954[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4263954[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264535 = 1;
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_165(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_160(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_161(iParam0);
	}
}

void func_161(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_171())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_164(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4263954[iParam0 /*85*/].f_66);
		}
		func_162(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_162(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_163(&(uParam0->f_14));
	func_163(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_163(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_164(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_165(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_166(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_171())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4263954[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4263954[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4263954[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4263954[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4263954[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4263954[iVar0 /*85*/].f_66 = iParam0;
			Global_4263954[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4263954[iVar0 /*85*/].f_66.f_11 = iParam8;
			Global_4263954[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4263954[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4263954[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4263954[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4263954[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_167(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_167(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	vector3 vVar0;
	int iVar36;

	if (iParam85 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 285918879;
	vVar0.f_1 = PLAYER::PLAYER_ID();
	vVar0.f_2 = { Param0.f_66 };
	vVar0.f_2.f_33 = iParam85;
	iVar36 = func_169(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_168();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 36, iVar36);
	}
}

void func_168()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_169(int iParam0)
{
	var uVar0;

	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_170()
{
	return Global_1312745;
}

int func_171()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_172(int iParam0)
{
	var uVar0;

	uVar0 = func_173(iParam0);
	return uVar0;
}

int func_173(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		}
		else if (func_174(iParam0))
		{
			return Global_1590535[iParam0 /*876*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_174(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2439138.f_1, iParam0);
	}
	return 1;
}

void func_175(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_176(int iParam0)
{
	char* sVar0;

	sVar0 = "taxi_display";
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1711))
	{
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_1712);
		iLocal_1713 = UNK_0xB01F55A0FD1CFD49(sVar0);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_1712) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_1713))
		{
			if (func_13(Local_68.f_2[iParam0 /*23*/]))
			{
				iLocal_1711 = OBJECT::CREATE_OBJECT(iLocal_1712, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), true), false, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1711, NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), "Chassis"), vLocal_2604, vLocal_2607, false, false, false, false, 2, true);
				if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi"))
				{
					HUD::REGISTER_NAMED_RENDERTARGET("taxi", false);
					if (!HUD::IS_NAMED_RENDERTARGET_LINKED(ENTITY::GET_ENTITY_MODEL(iLocal_1711)))
					{
						HUD::LINK_NAMED_RENDERTARGET(ENTITY::GET_ENTITY_MODEL(iLocal_1711));
					}
				}
				iLocal_1708 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("taxi");
				return 1;
			}
		}
	}
	return 0;
}

void func_177(int iParam0)
{
	int iVar0;

	if (func_180())
	{
		if (Local_68.f_2[iParam0 /*23*/].f_7 == 8 && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), 20f, 20f, 3f, false, true, 1))
		{
			STREAMING::REQUEST_ANIM_DICT("TAXI_HAIL");
			if (STREAMING::HAS_ANIM_DICT_LOADED("TAXI_HAIL"))
			{
				if (uLocal_1682[iParam0] == -1)
				{
					func_179(&(uLocal_1682[iParam0]), 0, "TXM_H01", 1, 0, 0, 0);
				}
				if (func_178(uLocal_1682[iParam0], 1))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_SWAP_WEAPON(0, false);
						TASK::TASK_PLAY_ANIM(0, "TAXI_HAIL", "HAIL_TAXI", 8f, -8f, -1, 48, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					}
					else
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "TAXI_HAIL", "HAIL_TAXI", 8f, -8f, -1, 48, 0f, false, false, false);
					}
					if (func_50("TXM_H01"))
					{
						HUD::CLEAR_HELP(true);
					}
					Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_1 = iParam0;
					MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 23);
					MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 22);
					func_48(&(uLocal_1682[iParam0]));
				}
			}
		}
		else
		{
			STREAMING::REMOVE_ANIM_DICT("TAXI_HAIL");
			func_48(&(uLocal_1682[iParam0]));
		}
	}
	else
	{
		STREAMING::REMOVE_ANIM_DICT("TAXI_HAIL");
		func_48(&(uLocal_1682[iParam0]));
	}
}

int func_178(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_49(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_52(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/] == 1 && Global_42151[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42151[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_42151[iVar0 /*32*/].f_5 = 1;
			Global_42151[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42151[iVar0 /*32*/] == 0)
			{
			}
			if (Global_42151[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

void func_179(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;

	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CONTEXT_CONTROLLER")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_48(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/] = 1;
			Global_42151[iVar0 /*32*/].f_1 = Global_42352;
			Global_42352++;
			Global_42151[iVar0 /*32*/].f_4 = 0;
			Global_42151[iVar0 /*32*/].f_29 = 0;
			Global_42151[iVar0 /*32*/].f_5 = 0;
			Global_42151[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_42151[iVar0 /*32*/].f_8), sParam2, 16);
			Global_42151[iVar0 /*32*/].f_6 = iParam3;
			Global_42151[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_42151[iVar0 /*32*/].f_7 = 0;
			Global_42151[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_42151[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_42151[iVar0 /*32*/].f_13), sParam4, 64);
				Global_42151[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_42151[iVar0 /*32*/].f_12 = 0;
				Global_42151[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_42151[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_180()
{
	if (func_10(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_1 != -1)
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			return 0;
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			return 0;
		}
		if (func_181(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
		if (func_52(0))
		{
			return 0;
		}
		if (func_75())
		{
			return 0;
		}
		if (func_80())
		{
			return 0;
		}
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_181(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_182(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0 /*876*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_182(int iParam0)
{
	return func_183(iParam0);
}

bool func_183(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_13.f_1, 0);
}

void func_184(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;

	if (((((((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), 10f, 10f, 2f, false, true, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])) < 3f) && !func_191(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), 0)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0) && Local_68.f_2[iParam0 /*23*/].f_7 != 9) && Local_68.f_2[iParam0 /*23*/].f_7 != 10) && Local_68.f_2[iParam0 /*23*/].f_7 != 11)
	{
		if (MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_3, (0 + iParam0)))
		{
			func_145(&iVar0, &iVar1, &uVar2, &uVar3, 0);
			if (((iVar1 > 28 || iVar1 < -28) || iVar0 > 28) || iVar0 < -28)
			{
				if (bLocal_1875 == 0)
				{
					SYSTEM::SETTIMERA(0);
					bLocal_1875 = true;
				}
			}
			else
			{
				bLocal_1875 = false;
			}
			if (bLocal_1875 == 1)
			{
				if (SYSTEM::TIMERA() > 275)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_3), (0 + iParam0));
						bLocal_1875 = false;
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_BIT_SET(iLocal_1672, (0 + iParam0)))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					iVar5 = func_190(1190, -1, 0);
					if ((!MISC::IS_BIT_SET(iVar5, 7) || !MISC::IS_BIT_SET(iVar5, 8)) || !MISC::IS_BIT_SET(iVar5, 9))
					{
						if (func_87(&uLocal_1703, 20000, 0))
						{
							if ((((INTERIOR::GET_INTERIOR_FROM_ENTITY(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])) == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_UPRIGHT(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), 90f)) && !ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]))) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !func_188(PLAYER::PLAYER_ID()))
							{
								func_175("TXM_H02", -1);
								if (!MISC::IS_BIT_SET(iVar5, 7))
								{
									MISC::SET_BIT(&iVar5, 7);
								}
								else if (!MISC::IS_BIT_SET(iVar5, 8))
								{
									MISC::SET_BIT(&iVar5, 8);
								}
								else
								{
									MISC::SET_BIT(&iVar5, 9);
								}
								func_186(1190, iVar5, -1, 1, 0);
								func_32(&uLocal_1703);
								MISC::SET_BIT(&iLocal_1672, (0 + iParam0));
							}
						}
					}
				}
			}
			if (PAD::IS_CONTROL_PRESSED(0, 23))
			{
				if (SYSTEM::TIMERB() > 275)
				{
					if (!MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_3, (0 + iParam0)))
					{
						if (func_185(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])) == 1)
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), 1, false))
							{
								iVar4 = 1;
							}
							else if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), 2, false))
							{
								iVar4 = 2;
							}
							else
							{
								iVar4 = 0;
							}
						}
						else if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), 2, false))
						{
							iVar4 = 2;
						}
						else if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), 0, false))
						{
							iVar4 = 0;
						}
						else
						{
							iVar4 = 1;
						}
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), -1, iVar4, 1f, 8388608, 0);
						MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_3), (0 + iParam0));
						iLocal_2598 = 1;
					}
				}
			}
			else
			{
				SYSTEM::SETTIMERB(0);
			}
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_1672, (0 + iParam0)))
		{
			MISC::CLEAR_BIT(&iLocal_1672, (0 + iParam0));
			if (func_50("TXM_H02"))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		if (MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_3, (0 + iParam0)))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				bLocal_1875 = false;
			}
			MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_3), (0 + iParam0));
		}
	}
}

int func_185(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		else
		{
			return -1;
		}
		vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 1f, -0.5f, 0f) };
		vVar9 = { vVar3 - vVar0 };
		vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, -1f, -0.5f, 0f) };
		vVar12 = { vVar6 - vVar0 };
		if (SYSTEM::VMAG(vVar9) < SYSTEM::VMAG(vVar12))
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	return -1;
}

void func_186(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_187(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_187(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_170();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

bool func_188(int iParam0)
{
	return func_189(iParam0) == joaat("WEAPON_MINIGUN");
}

int func_189(int iParam0)
{
	return Global_1628237[iParam0 /*615*/].f_595;
}

int func_190(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_187(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_191(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), false))
			{
				return 0;
			}
			else if (!bParam1)
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1), false);
				if (PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_192(int iParam0)
{
	if (Local_68.f_2[iParam0 /*23*/].f_2 == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		if (Local_68.f_2[iParam0 /*23*/].f_3 == -1)
		{
			if (Local_68.f_2[iParam0 /*23*/].f_7 == 3)
			{
				if (func_10(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (!func_15(Local_68.f_2[iParam0 /*23*/].f_1))
					{
						if (func_13(Local_68.f_2[iParam0 /*23*/]))
						{
							if (PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), false))
							{
								func_193(iParam0);
								return;
							}
						}
					}
				}
			}
		}
	}
	func_47(iParam0);
}

void func_193(int iParam0)
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_1673[iParam0]))
	{
		iLocal_1673[iParam0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]));
		HUD::SET_BLIP_SPRITE(iLocal_1673[iParam0], 198);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1673[iParam0], "TXM_BLIP");
		HUD::SET_BLIP_FLASHES(iLocal_1673[iParam0], true);
		HUD::SET_BLIP_FLASH_TIMER(iLocal_1673[iParam0], 7000);
		MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 12);
	}
}

void func_194(int iParam0)
{
	if (!MISC::IS_BIT_SET(Global_2537071.f_795, 1))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_1673[iParam0]))
		{
			MISC::SET_BIT(&(Global_2537071.f_795), 1);
		}
	}
	if (MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_1, 0))
	{
		if (Local_68.f_2[iParam0 /*23*/].f_2 == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_1), 0);
		}
	}
}

void func_195(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	int iVar9;
	float fVar10;

	if (!func_15(Local_68.f_2[iParam0 /*23*/].f_1) && func_13(Local_68.f_2[iParam0 /*23*/]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_68.f_2[iParam0 /*23*/].f_1) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_68.f_2[iParam0 /*23*/]))
		{
			iVar3 = 3;
			vVar4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), false) };
			if (Local_68.f_2[iParam0 /*23*/].f_7 != 11)
			{
				if (Local_68.f_2[iParam0 /*23*/].f_7 != 9)
				{
					if (Local_68.f_2[iParam0 /*23*/].f_7 != 10)
					{
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), 251, true);
						if (!MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_3, iParam0))
						{
							if (func_218(iParam0))
							{
								func_39(1, 1, 1);
								MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_3), iParam0);
							}
						}
						if (Local_68.f_2[iParam0 /*23*/].f_7 != 8)
						{
							VEHICLE::_0xBE5C1255A1830FF5(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), true);
						}
					}
				}
			}
			func_217(iParam0);
			switch (Local_68.f_2[iParam0 /*23*/].f_7)
			{
				case 0:
					break;
				case 1:
					if (Local_68.f_2[iParam0 /*23*/].f_2 != -1 && Local_68.f_2[iParam0 /*23*/].f_2 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						if (func_11(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, 0f, 0f, 0f, 0))
						{
							if (func_213(iParam0, func_216(PLAYER::PLAYER_ID()), &(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26), &(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_29), &(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34), 250))
							{
								Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 = -1;
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, 12f, 0, ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])), iVar1, (45f - 20f), 20f);
							}
						}
						else if (!func_9(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), -1817882002, 1))
						{
							iVar1 = iLocal_1719;
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, 12f, 0, ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])), iVar1, (45f - 20f), 20f);
						}
						MISC::CLEAR_BIT(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 21);
					}
					break;
				case 2:
					if (Local_68.f_2[iParam0 /*23*/].f_2 != -1 && Local_68.f_2[iParam0 /*23*/].f_2 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						if (!MISC::IS_BIT_SET(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 21))
						{
							if (func_210(vVar4, Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_29, &(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26), &(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_29)))
							{
								PED::SET_DRIVER_ABILITY(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), 0.5f);
								if (MISC::IS_BIT_SET(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 14))
								{
									TASK::TASK_VEHICLE_PARK(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_29, 0, 60f, false);
								}
								else
								{
									TASK::TASK_VEHICLE_PARK(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_26, Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_29, 3, 60f, false);
								}
								iLocal_2598 = 1;
								MISC::SET_BIT(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 21);
							}
						}
						MISC::CLEAR_BIT(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 22);
						MISC::CLEAR_BIT(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 23);
					}
					break;
				case 3:
					if (Local_68.f_2[iParam0 /*23*/].f_2 != -1 && Local_68.f_2[iParam0 /*23*/].f_2 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						if (!MISC::IS_BIT_SET(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 23))
						{
							VEHICLE::START_VEHICLE_HORN(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), 2500, MISC::GET_HASH_KEY("NORMAL"), false);
							MISC::SET_BIT(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 23);
						}
						if (!MISC::IS_BIT_SET(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 22))
						{
							TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), true), 5, 5f, 1076627627, -1f, 1f, true);
							iLocal_2598 = 1;
							MISC::SET_BIT(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 22);
						}
						else if (!VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])))
						{
							if (!func_9(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), -1273030092, 1) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])) != 5)
							{
								MISC::CLEAR_BIT(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 22);
							}
						}
					}
					break;
				case 4:
					if (Local_68.f_2[iParam0 /*23*/].f_3 != -1 && Local_68.f_2[iParam0 /*23*/].f_3 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30 = { 0f, 0f, 0f };
						Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_33 = 0f;
						Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_34 = -1;
					}
					if (func_9(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), -1273030092, 1))
					{
						func_115(iParam0, 0, 0);
					}
					STREAMING::REQUEST_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
					if (STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@TAXI@DRIVER"))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
						{
							if (ENTITY::HAS_ENTITY_ANIM_FINISHED(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
							{
								TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1));
								TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 4f, -8f, -1, 1, 0f, false, false, false);
							}
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
						{
							if (!VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])))
							{
								if (!func_9(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), -1273030092, 1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), vVar4, 5, 5f, 1076627627, -1f, 1f, true);
								}
							}
							else if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), 0, false))
							{
								TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1));
								TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 8f, -8f, -1, 2, 0f, false, false, false);
							}
						}
					}
					break;
				case 5:
					if (Local_68.f_2[iParam0 /*23*/].f_3 != -1 && Local_68.f_2[iParam0 /*23*/].f_3 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						if (func_11(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, 0f, 0f, 0f, 0) && func_11(Local_68.f_2[iParam0 /*23*/].f_8, Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_5, 0))
						{
							if (Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_34 == -1)
							{
								if (func_209(Local_68.f_2[iParam0 /*23*/].f_8, &(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30), &(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_33), iParam0) || func_199(Local_68.f_2[iParam0 /*23*/].f_8, &(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30), &(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_33), iParam0))
								{
									MISC::SET_BIT(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 14);
									func_115(iParam0, 0, 0);
									iLocal_2598 = 1;
								}
								Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_34 = 0;
							}
							else
							{
								iVar8 = NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]);
								if (func_196(&iVar8, Local_68.f_2[iParam0 /*23*/].f_8, &(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30), &(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_33), &(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_34), 1000))
								{
									MISC::CLEAR_BIT(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 14);
									Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_34 = 0;
									func_115(iParam0, 0, 0);
									iLocal_2598 = 1;
								}
							}
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
						{
							STREAMING::REQUEST_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
							if (STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@TAXI@DRIVER"))
							{
								TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1));
								TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 4f, -4f, -1, 0, 0f, false, false, false);
							}
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							ENTITY::SET_ENTITY_ANIM_SPEED(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 1.2f);
						}
						else if (!func_11(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, 0f, 0f, 0f, 0))
						{
							if (!func_8(iParam0))
							{
								if (!func_9(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), 242628503, 1))
								{
									fVar2 = 15f;
									iVar1 = iLocal_1719;
									iVar3 = 3;
									if (MISC::IS_BIT_SET(Local_68.f_2[iParam0 /*23*/].f_6, 3) || MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 3))
									{
										fVar2 = 20f;
										iVar1 = iLocal_1720;
									}
									if (MISC::IS_BIT_SET(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2, 14))
									{
										iVar3 = 0;
									}
									func_115(iParam0, 1, 1);
									PED::SET_DRIVER_ABILITY(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), 0.5f);
									TASK::OPEN_SEQUENCE_TASK(&iVar0);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, fVar2, iVar1, 45f);
									TASK::TASK_VEHICLE_PARK(0, NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_30, Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_33, iVar3, 60f, true);
									TASK::CLOSE_SEQUENCE_TASK(iVar0);
									TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), iVar0);
									TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									iLocal_2598 = 1;
								}
							}
						}
						MISC::CLEAR_BIT(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 24);
						MISC::CLEAR_BIT(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 25);
					}
					break;
				case 6:
					if (Local_68.f_2[iParam0 /*23*/].f_3 != -1 && Local_68.f_2[iParam0 /*23*/].f_3 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						if (!MISC::IS_BIT_SET(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2, 24))
						{
							if (!func_9(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), 242628503, 1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), true), 5, 5f, 1076627627, -1f, 1f, true);
								iLocal_2598 = 1;
								MISC::SET_BIT(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 24);
							}
						}
						else
						{
							if (!VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])))
							{
								if (!func_9(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), -1273030092, 1) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])) != 5)
								{
									MISC::CLEAR_BIT(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 24);
								}
							}
							func_7(iParam0, 1);
						}
					}
					break;
				case 7:
					if (Local_68.f_2[iParam0 /*23*/].f_3 != -1 && Local_68.f_2[iParam0 /*23*/].f_3 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						iLocal_2598 = 1;
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
						{
							if (ENTITY::HAS_ENTITY_ANIM_FINISHED(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
							{
								STREAMING::REQUEST_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
								if (STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@TAXI@DRIVER"))
								{
									TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1));
									TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 4f, -8f, -1, 1, 0f, false, false, false);
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							if (!MISC::IS_BIT_SET(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2, 25))
							{
								if (!func_9(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), -1273030092, 1) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])) != 5)
								{
									func_115(iParam0, 1, 1);
									TASK::TASK_VEHICLE_PARK(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), true), ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1)), 3, 60f, false);
								}
								MISC::SET_BIT(&(Local_263[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 25);
							}
						}
					}
					break;
				case 8:
					VEHICLE::_0xBE5C1255A1830FF5(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), false);
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
					{
						STREAMING::REQUEST_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
						if (STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@TAXI@DRIVER"))
						{
							TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1));
							TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 4f, -4f, -1, 0, 0f, false, false, false);
						}
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 1.2f);
					}
					else if (!func_9(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), -1273030092, 1))
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), true), 8, 12f, 786599, 400f, -1f, false);
					}
					break;
				case 9:
				case 10:
					func_7(iParam0, 0);
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
					{
						ENTITY::STOP_ENTITY_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "leanover_enter", "ODDJOBS@TAXI@DRIVER", -2f);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
					{
						ENTITY::STOP_ENTITY_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "leanover_idle", "ODDJOBS@TAXI@DRIVER", -2f);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
					{
						ENTITY::STOP_ENTITY_ANIM(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), "leanover_exit", "ODDJOBS@TAXI@DRIVER", -2f);
					}
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), 251, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), false);
					VEHICLE::_0xBE5C1255A1830FF5(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), false);
					if (((!PED::IS_PED_FLEEING(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1)) && !func_9(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), 1805844857, 1)) && !func_9(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), -251125078, 1)) && TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/])) != 8)
					{
						if (Local_68.f_2[iParam0 /*23*/].f_7 == 10)
						{
							bVar7 = true;
						}
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), -1, false) != NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1))
						{
							bVar7 = true;
						}
						if (Local_68.f_2[iParam0 /*23*/].f_4 != -1)
						{
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_68.f_2[iParam0 /*23*/].f_4)))
							{
								iVar9 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_68.f_2[iParam0 /*23*/].f_4)));
							}
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
						{
							iVar9 = 0;
						}
						if (bVar7)
						{
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), 2, false);
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), 65536, true);
							if (ENTITY::DOES_ENTITY_EXIST(iVar9))
							{
								TASK::TASK_SMART_FLEE_PED(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), iVar9, 500f, -1, false, false);
							}
							else
							{
								TASK::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), vVar4, 500f, -1, false, false);
							}
						}
						else
						{
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), 65536, false);
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), 2, true);
							if (ENTITY::DOES_ENTITY_EXIST(iVar9))
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), iVar9, 8, 25f, 790564, 200f, 15f, true);
							}
							else
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), vVar4, 8, 25f, 790564, 200f, 15f, true);
							}
						}
					}
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), true);
					break;
				case 11:
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iParam0 /*23*/]))
					{
						VEHICLE::_0xBE5C1255A1830FF5(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), false);
						func_28(&(Local_68.f_2[iParam0 /*23*/]));
					}
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iParam0 /*23*/].f_1))
					{
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), 251, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), false);
						func_28(&(Local_68.f_2[iParam0 /*23*/].f_1));
					}
					return;
			}
		}
		if (func_10(PLAYER::PLAYER_ID(), 1, 1))
		{
			fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_216(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), true), true);
			if (fVar10 < fLocal_2619)
			{
				fLocal_2619 = fVar10;
				iLocal_2618 = iParam0;
			}
		}
	}
	if (Local_68.f_2[iParam0 /*23*/].f_7 == 11)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iParam0 /*23*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_68.f_2[iParam0 /*23*/]))
			{
				VEHICLE::_0xBE5C1255A1830FF5(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), false);
				func_28(&(Local_68.f_2[iParam0 /*23*/]));
			}
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iParam0 /*23*/].f_1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_68.f_2[iParam0 /*23*/].f_1))
			{
				if (!func_15(Local_68.f_2[iParam0 /*23*/].f_1))
				{
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), 251, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1), false);
				}
				func_28(&(Local_68.f_2[iParam0 /*23*/].f_1));
			}
		}
	}
}

int func_196(int iParam0, vector3 vParam1, var uParam4, int iParam5, var uParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	var uVar5;
	var uVar8;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	bool bVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	var uVar27;
	vector3 vVar28;
	float fVar31;

	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar11 = 0;
	bVar19 = false;
	iVar20 = 1;
	if (!func_198(vParam1))
	{
		iVar20 = 9;
	}
	bVar21 = true;
	iVar24 = *uParam6 + 2;
	iVar25 = 50;
	PATHFIND::_0x07FB139B592FA687((vParam1.x - IntToFloat(iParam7)), (vParam1.y - IntToFloat(iParam7)), (vParam1.x + IntToFloat(iParam7)), (vParam1.y + IntToFloat(iParam7)));
	if (PATHFIND::_ARE_PATH_NODES_LOADED_IN_AREA((vParam1.x - IntToFloat(iParam7)), (vParam1.y - IntToFloat(iParam7)), (vParam1.x + IntToFloat(iParam7)), (vParam1.y + IntToFloat(iParam7))))
	{
		while (!bVar19 && *uParam6 < iVar24)
		{
			if (vParam1.z == 1f)
			{
				fVar0 = 0f;
			}
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *uParam6, &vVar28, &fVar31, &iVar12, iVar20, fVar0, fVar1))
			{
				iVar18 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(vVar28, 1, iVar20, 3f, 0f);
				if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar18))
				{
					if (PATHFIND::GET_CLOSEST_ROAD(vVar28, 1f, 1, &uVar8, &uVar5, &iVar14, &iVar13, &fVar16, bVar21))
					{
						if (fVar31 < 90f || fVar31 >= 270f)
						{
							bVar23 = true;
						}
						else
						{
							bVar23 = false;
						}
						bVar22 = false;
						if (bVar23)
						{
							if (iVar12 == iVar14)
							{
								bVar22 = true;
							}
						}
						else if (iVar12 == iVar13)
						{
							bVar22 = true;
						}
						if (fVar16 < 0f)
						{
							fVar15 = 0f;
						}
						else if (PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar18) || !PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar18))
						{
							fVar15 = 0f;
						}
						else
						{
							if (bVar23)
							{
								if (bVar22)
								{
									fVar15 = (4.5f * (SYSTEM::TO_FLOAT(iVar14) * 0.5f));
								}
								else
								{
									fVar15 = (4.5f * SYSTEM::TO_FLOAT(iVar14));
								}
								if (bVar22)
								{
									if (iVar14 > 2)
									{
										fVar15 = (fVar15 + (IntToFloat((iVar14 - 2)) * 1f));
									}
								}
								else if (iVar14 > 1)
								{
									fVar15 = (fVar15 + (IntToFloat((iVar14 - 1)) * 1f));
								}
							}
							else
							{
								if (bVar22)
								{
									fVar15 = (4.5f * (SYSTEM::TO_FLOAT(iVar13) * 0.5f));
								}
								else
								{
									fVar15 = (4.5f * SYSTEM::TO_FLOAT(iVar13));
								}
								if (bVar22)
								{
									if (iVar13 > 2)
									{
										fVar15 = (fVar15 + (IntToFloat((iVar13 - 2)) * 1f));
									}
								}
								else if (iVar13 > 1)
								{
									fVar15 = (fVar15 + (IntToFloat((iVar13 - 1)) * 1f));
								}
							}
							if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar28, &uVar27, &iVar26))
							{
								if (!iVar26 & 64 == 0)
								{
									fVar15 = (fVar15 + (0.9f * fVar16));
								}
								if (!iVar26 & 4 == 0)
								{
									fVar15 = (fVar15 + -0.7f);
								}
							}
						}
						fVar17 = (vParam1.z - vVar28.z);
						if (fVar17 < 0f)
						{
							fVar17 = (fVar17 * -1f);
						}
						if (func_197(vParam1, vVar28) || fVar17 < 0.5f)
						{
							vVar28 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar28, fVar31, fVar15, 0f, 0f) };
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
							{
								iVar11 = *iParam0;
							}
							if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(vVar28, 3f, 3f, 3f, iVar11))
							{
								if (func_209(vVar28, &vVar28, &fVar31, 1) || func_199(vVar28, &vVar28, &fVar31, 1))
								{
								}
								bVar19 = true;
							}
						}
					}
				}
			}
			*uParam6++;
			if (*uParam6 >= iVar25)
			{
				vVar28 = { vParam1 };
				bVar19 = true;
			}
		}
	}
	if (bVar19)
	{
		*uParam4 = { vVar28 };
		*iParam5 = fVar31;
		vVar2 = { vParam1 - *uParam4 };
		vVar2.f_2 = 0f;
		fLocal_1705 = SYSTEM::VMAG(vVar2);
		if (fLocal_1705 != 0f)
		{
		}
		return 1;
	}
	return 0;
}

int func_197(vector3 vParam0, vector3 vParam3)
{
	float fVar0;
	float fVar1;

	fVar1 = (vParam3.z - vParam0.z);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 * -1f);
	}
	if (vParam0.z <= 1f)
	{
		func_85("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return 1;
	}
	fVar0 = SYSTEM::VDIST(vParam0, vParam3);
	fVar0 = (fVar0 / 1.75f);
	if (fVar1 < fVar0)
	{
		func_85("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return 1;
	}
	return 0;
}

int func_198(vector3 vParam0)
{
	char* sVar0;

	sVar0 = ZONE::GET_NAME_OF_ZONE(vParam0);
	if (((((((((((((((((((((((((((((((((((((((((((((MISC::ARE_STRINGS_EQUAL("SanAnd", sVar0) || MISC::ARE_STRINGS_EQUAL("Alamo", sVar0)) || MISC::ARE_STRINGS_EQUAL("ArmyB", sVar0)) || MISC::ARE_STRINGS_EQUAL("BhamCa", sVar0)) || MISC::ARE_STRINGS_EQUAL("Baytre", sVar0)) || MISC::ARE_STRINGS_EQUAL("BradT", sVar0)) || MISC::ARE_STRINGS_EQUAL("BradP", sVar0)) || MISC::ARE_STRINGS_EQUAL("CANNY", sVar0)) || MISC::ARE_STRINGS_EQUAL("CCreak", sVar0)) || MISC::ARE_STRINGS_EQUAL("ChamH", sVar0)) || MISC::ARE_STRINGS_EQUAL("CHU", sVar0)) || MISC::ARE_STRINGS_EQUAL("COSI", sVar0)) || MISC::ARE_STRINGS_EQUAL("CMSW", sVar0)) || MISC::ARE_STRINGS_EQUAL("Cypre", sVar0)) || MISC::ARE_STRINGS_EQUAL("Desrt", sVar0)) || MISC::ARE_STRINGS_EQUAL("ELGorl", sVar0)) || MISC::ARE_STRINGS_EQUAL("Galli", sVar0)) || MISC::ARE_STRINGS_EQUAL("Galfish", sVar0)) || MISC::ARE_STRINGS_EQUAL("Harmo", sVar0)) || MISC::ARE_STRINGS_EQUAL("HumLab", sVar0)) || MISC::ARE_STRINGS_EQUAL("Jail", sVar0)) || MISC::ARE_STRINGS_EQUAL("LAct", sVar0)) || MISC::ARE_STRINGS_EQUAL("LDam", sVar0)) || MISC::ARE_STRINGS_EQUAL("Lago", sVar0)) || MISC::ARE_STRINGS_EQUAL("MTChil", sVar0)) || MISC::ARE_STRINGS_EQUAL("MTJose", sVar0)) || MISC::ARE_STRINGS_EQUAL("MTGordo", sVar0)) || MISC::ARE_STRINGS_EQUAL("NCHU", sVar0)) || MISC::ARE_STRINGS_EQUAL("Oceana", sVar0)) || MISC::ARE_STRINGS_EQUAL("Palmpow", sVar0)) || MISC::ARE_STRINGS_EQUAL("PBluff", sVar0)) || MISC::ARE_STRINGS_EQUAL("Paleto", sVar0)) || MISC::ARE_STRINGS_EQUAL("PalCov", sVar0)) || MISC::ARE_STRINGS_EQUAL("PalFor", sVar0)) || MISC::ARE_STRINGS_EQUAL("PalHigh", sVar0)) || MISC::ARE_STRINGS_EQUAL("RTRAK", sVar0)) || MISC::ARE_STRINGS_EQUAL("Rancho", sVar0)) || MISC::ARE_STRINGS_EQUAL("SANDY", sVar0)) || MISC::ARE_STRINGS_EQUAL("TongvaH", sVar0)) || MISC::ARE_STRINGS_EQUAL("TongvaV", sVar0)) || MISC::ARE_STRINGS_EQUAL("Zenora", sVar0)) || MISC::ARE_STRINGS_EQUAL("Slab", sVar0)) || MISC::ARE_STRINGS_EQUAL("WindF", sVar0)) || MISC::ARE_STRINGS_EQUAL("Zancudo", sVar0)) || MISC::ARE_STRINGS_EQUAL("SanChia", sVar0)) || MISC::ARE_STRINGS_EQUAL("zQ_UAR", sVar0))
	{
		return 1;
	}
	return 0;
}

int func_199(vector3 vParam0, int iParam3, float fParam4, int iParam5)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4[6];
	int iVar23;
	float fVar24;
	float fVar25;
	int iVar26;
	vector3 vVar27;
	float fVar30;
	float fVar31;
	vector3 vVar32;
	float fVar35;
	float fVar36;
	bool bVar37;

	if (func_208(vParam0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*iParam3 = { 1261.58f, -3332.685f, 5.4191f };
		*fParam4 = 163.87f;
		return 1;
	}
	else if (func_208(vParam0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*iParam3 = { -1577.16f, 5166.51f, 19.1864f };
		*fParam4 = 0f;
		return 1;
	}
	else if (func_208(vParam0, -874.9833f, 125.7645f, -100f, -768.6254f, 193.0297f, 100f))
	{
		*iParam3 = { -856.6151f, 163.7361f, 65.093f };
		*fParam4 = 355.3355f;
		return 1;
	}
	else if (func_208(vParam0, -39.2005f, -1473.55f, -100f, 10.6133f, -1430.099f, 100f))
	{
		*iParam3 = { -15.5181f, -1456.4f, 29.4244f };
		*fParam4 = 94.6893f;
		return 1;
	}
	else if (func_208(vParam0, 1964.742f, 3792.59f, -100f, 1992.636f, 3840.253f, 100f))
	{
		*iParam3 = { 1996.372f, 3818.831f, 31.1612f };
		*fParam4 = 170.0221f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -68.2187f, -1086.951f, -100f, -10.54518f, -1106.895f, 100f, 43.5f, false, true))
	{
		*iParam3 = { -63.5854f, -1074.732f, 26.0995f };
		*fParam4 = 324.1257f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 398.7899f, -1651.417f, -100f, 423.8372f, -1619.432f, 100f, 45f, false, true))
	{
		*iParam3 = { 416.871f, -1613.081f, 28.1401f };
		*fParam4 = 227.9333f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -988.8535f, -2553.177f, -100f, -1041.486f, -2644.97f, 100f, 49.75f, false, true) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*iParam3 = { -1039.542f, -2574.467f, 12.7566f };
		*fParam4 = 162.2744f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -906.902f, -2600.461f, -100f, -959.7651f, -2692.057f, 100f, 49.75f, false, true) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*iParam3 = { -911.1597f, -2676.132f, 12.7567f };
		*fParam4 = 338.9414f;
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 28f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, -209.3372f, -2011.099f, 26.62037f, -257.2225f, -2076.963f, 36.62037f, 30f, false, true))
	{
		*iParam3 = { -211.8546f, -2030.771f, 26.6204f };
		*fParam4 = 154.4302f;
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 159f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, false, true))
	{
		*iParam3 = { -623.3622f, 3996f, 120.7669f };
		*fParam4 = 37.8784f;
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 180f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, -2203.167f, 183.3549f, 167.4022f, -2311.587f, 434.3828f, 195.4669f, 138.5f, false, true))
	{
		*iParam3 = { -2294.945f, 376.2506f, 173.4669f };
		*fParam4 = 296.6963f;
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 10f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, -2041.478f, -553.2159f, -0.089962f, -1787.08f, -768.0886f, 37.99918f, 220f, false, true))
	{
		*iParam3 = { -1897.077f, -557.3334f, 10.7279f };
		*fParam4 = 228.7709f;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, -1882.883f, -541.7442f, 4.675224f, -1929.626f, -598.6026f, 40.4298f, 35f, false, true))
		{
			return 1;
		}
		else
		{
			vVar4[0 /*3*/] = { -1962.468f, -503.4229f, 10.8349f };
			vVar4[1 /*3*/] = { -1924.472f, -534.7357f, 10.8181f };
			vVar4[2 /*3*/] = { -1896.324f, -557.768f, 10.7256f };
			vVar4[3 /*3*/] = { -1850.661f, -595.8367f, 10.4649f };
			vVar4[4 /*3*/] = { -1809f, -632.1207f, 10.0016f };
			vVar4[5 /*3*/] = { -1745.043f, -694.4053f, 9.1245f };
			iVar23 = -1;
			fVar24 = 99999f;
			iVar26 = 0;
			while (iVar26 <= 5)
			{
				fVar25 = SYSTEM::VDIST(vVar4[iVar26 /*3*/], vVar1);
				if (fVar25 < fVar24)
				{
					fVar24 = fVar25;
					iVar23 = iVar26;
				}
				iVar26++;
			}
			*iParam3 = { vVar4[iVar23 /*3*/] };
			if (iVar23 == 0)
			{
				*fParam4 = 234.3999f;
			}
			else if (iVar23 == 1)
			{
				*fParam4 = 232.2255f;
			}
			else if (iVar23 == 2)
			{
				*fParam4 = 228.2855f;
			}
			else if (iVar23 == 3)
			{
				*fParam4 = 231.4914f;
			}
			else if (iVar23 == 4)
			{
				*fParam4 = 230.6703f;
			}
			else if (iVar23 == 5)
			{
				*fParam4 = 228.7709f;
			}
			return 1;
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 330f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, -446.12f, 1057.452f, 318.6169f, -405.8336f, 1194.486f, 337.0966f, 106.25f, false, true))
	{
		*iParam3 = { -411.3629f, 1174.587f, 324.6421f };
		*fParam4 = 255.2881f;
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, -1362.091f, -29.26777f, -100f, -1377.953f, 152.2389f, 100f, 50f, false, true))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*iParam3 = { -1380.101f, 95.1566f, 53.5054f };
				*fParam4 = 4.555f;
				break;
			case 2:
				*iParam3 = { -1379.139f, 84.2472f, 53.0592f };
				*fParam4 = 6.9278f;
				break;
			case 3:
				*iParam3 = { -1378.427f, 74.5077f, 52.6622f };
				*fParam4 = 2.6813f;
				break;
			case 4:
				*iParam3 = { -1384.177f, 73.9207f, 52.7438f };
				*fParam4 = 5.542f;
				break;
			case 5:
				*iParam3 = { -1381.118f, 35.7838f, 52.659f };
				*fParam4 = 7.6687f;
				break;
			case 6:
				*iParam3 = { -1383.741f, 64.1491f, 52.6647f };
				*fParam4 = 2.5572f;
				break;
			case 7:
				*iParam3 = { -1382.616f, 49.6876f, 52.6585f };
				*fParam4 = 3.0185f;
				break;
			default:
				*iParam3 = { -1383.299f, 54.4598f, 52.6562f };
				*fParam4 = 6.2155f;
				break;
		}
		return 1;
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 48.31006f, -1120.669f, 28.0305f, -12.12345f, -1112.084f, 36.08567f, 60f, false, true))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*iParam3 = { 50.9889f, -1092.525f, 28.2152f };
					*fParam4 = 150.8833f;
					break;
				case 2:
					*iParam3 = { 46.7725f, -1099.751f, 28.1639f };
					*fParam4 = 149.4322f;
					break;
				case 3:
					*iParam3 = { 41.6146f, -1107.742f, 28.1318f };
					*fParam4 = 154.1378f;
					break;
				case 4:
					*iParam3 = { 38.1922f, -1113.394f, 28.1507f };
					*fParam4 = 146.3778f;
					break;
				case 5:
					*iParam3 = { 13.0436f, -1124.767f, 27.7359f };
					*fParam4 = 91.163f;
					break;
				case 6:
					*iParam3 = { 1.4336f, -1125.042f, 27.1705f };
					*fParam4 = 91.0578f;
					break;
				case 7:
					*iParam3 = { -11.1811f, -1125.811f, 26.3688f };
					*fParam4 = 91.866f;
					break;
				default:
					*iParam3 = { 21.9431f, -1124.573f, 27.9417f };
					*fParam4 = 91.6961f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, false, true))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*iParam3 = { -1023.982f, -2489.882f, 19.0755f };
					*fParam4 = 148.7004f;
					break;
				case 2:
					*iParam3 = { -1029.968f, -2500.438f, 19.0803f };
					*fParam4 = 148.7144f;
					break;
				case 3:
					*iParam3 = { -1070.546f, -2570.859f, 19.0836f };
					*fParam4 = 150.0955f;
					break;
				case 4:
					*iParam3 = { -1056.065f, -2545.662f, 19.0809f };
					*fParam4 = 149.5649f;
					break;
				case 5:
					*iParam3 = { -1050.578f, -2536.219f, 19.0824f };
					*fParam4 = 150.7363f;
					break;
				case 6:
					*iParam3 = { -1036.032f, -2510.902f, 19.0794f };
					*fParam4 = 147.2113f;
					break;
				case 7:
					*iParam3 = { -1044.487f, -2525.534f, 19.079f };
					*fParam4 = 150.7597f;
					break;
				default:
					*iParam3 = { -1064.5f, -2560.653f, 19.0905f };
					*fParam4 = 150.7081f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, false, true))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*iParam3 = { -1044.741f, -2528.786f, 12.7568f };
					*fParam4 = 150.9439f;
					break;
				case 2:
					*iParam3 = { -1050.763f, -2539.498f, 12.7566f };
					*fParam4 = 150.851f;
					break;
				case 3:
					*iParam3 = { -1054.952f, -2546.86f, 12.7566f };
					*fParam4 = 149.9285f;
					break;
				case 4:
					*iParam3 = { -1060.397f, -2556.898f, 12.6066f };
					*fParam4 = 150.8244f;
					break;
				case 5:
					*iParam3 = { -1020.744f, -2490.084f, 12.6396f };
					*fParam4 = 148.6134f;
					break;
				case 6:
					*iParam3 = { -1076.904f, -2589.179f, 12.6858f };
					*fParam4 = 149.0112f;
					break;
				case 7:
					*iParam3 = { -1026.387f, -2501.952f, 12.6923f };
					*fParam4 = 149.7553f;
					break;
				default:
					*iParam3 = { -1070.506f, -2578.389f, 12.6932f };
					*fParam4 = 148.5232f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, false, true))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*iParam3 = { -1067.846f, -2708.94f, 19.0588f };
					*fParam4 = 230.9025f;
					break;
				case 2:
					*iParam3 = { -1058.224f, -2716.217f, 19.06f };
					*fParam4 = 237.1285f;
					break;
				case 3:
					*iParam3 = { -1004.567f, -2744.797f, 19.0811f };
					*fParam4 = 255.6885f;
					break;
				case 4:
					*iParam3 = { -1049.509f, -2721.58f, 19.0546f };
					*fParam4 = 242.3581f;
					break;
				case 5:
					*iParam3 = { -1017.154f, -2740.117f, 19.0525f };
					*fParam4 = 243.5798f;
					break;
				case 6:
					*iParam3 = { -1042.087f, -2726.077f, 19.0452f };
					*fParam4 = 240.2381f;
					break;
				case 7:
					*iParam3 = { -1027.353f, -2734.462f, 19.0509f };
					*fParam4 = 239.8703f;
					break;
				default:
					*iParam3 = { -1033.74f, -2730.746f, 19.0521f };
					*fParam4 = 239.9237f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, false, true))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*iParam3 = { -971.9154f, -2749.122f, 12.6069f };
					*fParam4 = 265.8022f;
					break;
				case 2:
					*iParam3 = { -980.6166f, -2748.535f, 12.757f };
					*fParam4 = 263.5472f;
					break;
				case 3:
					*iParam3 = { -987.6072f, -2747.273f, 12.6069f };
					*fParam4 = 257.2886f;
					break;
				case 4:
					*iParam3 = { -1006.815f, -2739.345f, 12.6334f };
					*fParam4 = 242.1315f;
					break;
				case 5:
					*iParam3 = { -1051.83f, -2713.553f, 12.6333f };
					*fParam4 = 239.9312f;
					break;
				case 6:
					*iParam3 = { -1041.004f, -2719.647f, 12.6402f };
					*fParam4 = 240.1081f;
					break;
				case 7:
					*iParam3 = { -1023.832f, -2729.465f, 12.6445f };
					*fParam4 = 239.6737f;
					break;
				default:
					*iParam3 = { -1012.848f, -2735.172f, 12.6656f };
					*fParam4 = 237.6545f;
					break;
			}
			return 1;
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, 845.7216f, -990.7473f, 37.4696f, 846.3397f, -1066.88f, 16.96623f, 90f, false, true))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*iParam3 = { 868.1039f, -995.9224f, 29.7369f };
				*fParam4 = 93.132f;
				break;
			case 2:
				*iParam3 = { 859.283f, -996.4102f, 28.7865f };
				*fParam4 = 92.2581f;
				break;
			case 3:
				*iParam3 = { 849.4288f, -997.1062f, 27.5347f };
				*fParam4 = 92.714f;
				break;
			case 4:
				*iParam3 = { 841.1268f, -997.4826f, 26.5744f };
				*fParam4 = 92.8628f;
				break;
			case 5:
				*iParam3 = { 831.2605f, -1009.556f, 25.599f };
				*fParam4 = 268.6186f;
				break;
			case 6:
				*iParam3 = { 844.6506f, -1010.09f, 26.9894f };
				*fParam4 = 270.076f;
				break;
			case 7:
				*iParam3 = { 852.2498f, -1010.132f, 27.8091f };
				*fParam4 = 269.722f;
				break;
			default:
				*iParam3 = { 861.4028f, -1010.025f, 28.808f };
				*fParam4 = 270.7686f;
				break;
		}
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, 767.3736f, -1077.429f, -10.78654f, 682.8284f, -1080.686f, 79.67303f, 60f, false, true))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*iParam3 = { 703.2726f, -1067.7f, 21.4765f };
				*fParam4 = 181.3629f;
				break;
			case 2:
				*iParam3 = { 715.2089f, -1070.399f, 21.2708f };
				*fParam4 = 175.4362f;
				break;
			case 3:
				*iParam3 = { 715.2911f, -1059.42f, 21.0876f };
				*fParam4 = 181.0347f;
				break;
			case 4:
				*iParam3 = { 709.6841f, -1086.78f, 21.419f };
				*fParam4 = 233.169f;
				break;
			case 5:
				*iParam3 = { 703.807f, -1057.866f, 21.4152f };
				*fParam4 = 170.1609f;
				break;
			case 6:
				*iParam3 = { 708.1994f, -1048.194f, 21.216f };
				*fParam4 = 134.2729f;
				break;
			case 7:
				*iParam3 = { 711.1124f, -1069.423f, 21.3129f };
				*fParam4 = 177.9198f;
				break;
			default:
				*iParam3 = { 703.545f, -1078.718f, 21.3987f };
				*fParam4 = 180.5686f;
				break;
		}
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 31f;
	}
	if (func_205(3, vVar1))
	{
		if (func_204(vVar1, 3, 0, 0))
		{
			*iParam3 = { -1520.121f, 2731.511f, 16.6437f };
			*fParam4 = 48.1572f;
			return 1;
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 77.2f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, 1535.987f, -2041.497f, 68.21275f, 1529.357f, -2204.463f, 96.11195f, 105f, false, true))
	{
		*iParam3 = { 1540.75f, -2051.49f, 76.85f };
		*fParam4 = 255.41f;
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 51.1739f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, 1185.81f, -1768.367f, 28.31145f, 1369.068f, -1701.452f, 66.25389f, 70f, true, true))
	{
		if (func_203(vVar1, 1283.326f, -1731.522f, 51.78555f, 17f))
		{
			*iParam3 = { 1283.326f, -1731.522f, 51.78555f };
			*fParam4 = 275.4274f;
			return 1;
		}
		if (func_203(vVar1, 1334.386f, -1709.762f, 55.70131f, 41f))
		{
			*iParam3 = { 1334.386f, -1709.762f, 55.70131f };
			*fParam4 = 275.4411f;
			return 1;
		}
		if (func_203(vVar1, 1246.166f, -1750.625f, 45.35691f, 28f))
		{
			*iParam3 = { 1246.166f, -1750.625f, 45.35691f };
			*fParam4 = 301.2981f;
			return 1;
		}
		if (func_203(vVar1, 1196.272f, -1753.051f, 37.63976f, 32f))
		{
			*iParam3 = { 1196.272f, -1753.051f, 37.63976f };
			*fParam4 = 209.4354f;
			return 1;
		}
		*iParam3 = { 1283.326f, -1731.522f, 51.78555f };
		*fParam4 = 275.4274f;
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 25f;
	}
	if (func_203(vVar1, -1693.302f, -1109.13f, 17.89778f, 240f))
	{
		if ((OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, -1538.981f, -941.1323f, 10.56623f, -1715.57f, -1139.766f, 52.20361f, 110f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, -1739.989f, -1115.973f, 10.08726f, -1800.515f, -1187.18f, 52.0172f, 25f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, -1801.766f, -1180.252f, 4.017236f, -1857.718f, -1244.628f, 38.49653f, 85f, false, true))
		{
			*iParam3 = { -1624.445f, -976.9755f, 12.0175f };
			*fParam4 = 141.167f;
			return 1;
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 10f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, -1140.89f, -1573.135f, -6.566939f, -1067.084f, -1675.976f, 23.53153f, 52f, false, true))
	{
		*iParam3 = { -1095.63f, -1577.24f, 3.82f };
		*fParam4 = 216.12f;
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 114f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, false, true))
	{
		iVar0 = 3;
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
		{
			case 0:
				*iParam3 = { 1369.246f, 1147.653f, 112.7592f };
				*fParam4 = 182.0998f;
				break;
			case 1:
				*iParam3 = { 1360.848f, 1139.121f, 112.7592f };
				*fParam4 = 83.3356f;
				break;
			case 2:
				*iParam3 = { 1364.751f, 1154.367f, 112.7592f };
				*fParam4 = 223.2795f;
				break;
		}
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 40f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, 1737.39f, 3287.795f, 35.13897f, 1724.345f, 3337.854f, 57.20038f, 40f, false, true))
	{
		*iParam3 = { 1782.19f, 3300.076f, 40.4593f };
		*fParam4 = 142.426f;
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 7f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, -695.7981f, -1379.678f, 24.48124f, -777.3731f, -1491.13f, -3.594945f, 72f, false, true))
	{
		*iParam3 = { -658.2056f, -1388.789f, 9.499f };
		*fParam4 = 174.6945f;
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 325f;
	}
	if (SYSTEM::VDIST2(vVar1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
	{
		*iParam3 = { -142.367f, -895.0251f, 28.191f };
		*fParam4 = 71.6555f;
		return 1;
	}
	if (!func_201())
	{
		vVar1 = { vParam0 };
		if (vParam0.z == 1f)
		{
			vVar1.f_2 = 36.1141f;
		}
		if (func_205(7, vVar1))
		{
			if (func_204(vVar1, 7, 0, 0))
			{
				*iParam3 = { -1012.31f, -465.1634f, 36.1141f };
				*fParam4 = 112.1485f;
				return 1;
			}
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.f_2 = 12.7091f;
	}
	if (func_205(2, vVar1))
	{
		if (func_204(vVar1, 2, 0, 0))
		{
			iVar0 = 4;
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
				{
					case 0:
						*iParam3 = { -979.95f, -2746.109f, 12.7091f };
						*fParam4 = 91.4929f;
						break;
					case 1:
						*iParam3 = { -1025.193f, -2728.218f, 12.6647f };
						*fParam4 = 239.0041f;
						break;
					case 2:
						*iParam3 = { -1051.315f, -2713.069f, 12.6676f };
						*fParam4 = 236.4666f;
						break;
					case 3:
						*iParam3 = { -1095.742f, -2637.871f, 12.6461f };
						*fParam4 = 188.9897f;
						break;
				}
			}
			else
			{
				iVar0 = (iParam5 % 8);
				switch (iVar0)
				{
					case 1:
						*iParam3 = { -1023.982f, -2489.882f, 19.0755f };
						*fParam4 = 148.7004f;
						break;
					case 2:
						*iParam3 = { -1029.968f, -2500.438f, 19.0803f };
						*fParam4 = 148.7144f;
						break;
					case 3:
						*iParam3 = { -1070.546f, -2570.859f, 19.0836f };
						*fParam4 = 150.0955f;
						break;
					case 4:
						*iParam3 = { -1056.065f, -2545.662f, 19.0809f };
						*fParam4 = 149.5649f;
						Jump @6495; //curOff = 6372
						*iParam3 = { -1050.578f, -2536.219f, 19.0824f };
						*fParam4 = 150.7363f;
						Jump @6495; //curOff = 6402
						*iParam3 = { -1036.032f, -2510.902f, 19.0794f };
						*fParam4 = 147.2113f;
						Jump @6495; //curOff = 6432
						*iParam3 = { -1044.487f, -2525.534f, 19.079f };
						*fParam4 = 150.7597f;
						Jump @6495; //curOff = 6462
						*iParam3 = { -1064.5f, -2560.653f, 19.0905f };
						*fParam4 = 150.7081f;
					}
					return 1;
				}
			}
			vVar27 = { -509.5746f, 4938.918f, 146.3271f };
			fVar30 = 232.0109f;
			fVar31 = func_200(vParam0, vVar27);
			vVar32 = { 2450.604f, 5129.224f, 45.9722f };
			fVar35 = 241.1957f;
			fVar36 = func_200(vParam0, vVar32);
			vVar1 = { vParam0 };
			bVar37 = false;
			if (vParam0.z == 1f)
			{
				vVar1.f_2 = 400f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, false, true))
			{
				bVar37 = true;
			}
			if (vParam0.z == 1f)
			{
				vVar1.f_2 = 200f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, false, true))
			{
				bVar37 = true;
			}
			if (bVar37)
			{
				*iParam3 = { vVar27 };
				*fParam4 = fVar30;
				if (fVar36 < fVar31)
				{
					*iParam3 = { vVar32 };
					*fParam4 = fVar35;
				}
				return 1;
			}
			bVar37 = false;
			if (vParam0.z == 1f)
			{
				vVar1.f_2 = 700f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, false, true))
			{
				bVar37 = true;
			}
			if (vParam0.z == 1f)
			{
				vVar1.f_2 = 300f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, false, true))
			{
				bVar37 = true;
			}
			if (vParam0.z == 1f)
			{
				vVar1.f_2 = 100f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, false, true))
			{
				bVar37 = true;
			}
			if (vParam0.z == 1f)
			{
				vVar1.f_2 = 65f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, false, true))
			{
				bVar37 = true;
			}
			if (bVar37)
			{
				*iParam3 = { vVar32 };
				*fParam4 = fVar35;
				if (fVar31 < fVar36)
				{
					*iParam3 = { vVar27 };
					*fParam4 = fVar30;
				}
				return 1;
			}
			if (vParam0.z == 1f)
			{
				vVar1.f_2 = 6f;
			}
			if (func_12(vVar1, -99.68751f, -2448.891f, 5.01731f, 230f))
			{
				if ((((OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, false, true))
				{
					iVar0 = 2;
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0) == 0)
					{
						*iParam3 = { 29.5582f, -2553.587f, 5.0004f };
						*fParam4 = 253.9545f;
					}
					else
					{
						*iParam3 = { -189.6824f, -2531.649f, 5.0031f };
						*fParam4 = 0.0408f;
					}
					return 1;
				}
			}
			if (vParam0.z == 1f)
			{
				vVar1.f_2 = 28.4f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, 412.279f, 6481.868f, 25.80821f, 468.9353f, 6442.752f, 45.60727f, 24f, false, true))
			{
				*iParam3 = { 445.231f, 6476.948f, 28.4862f };
				*fParam4 = 219.4788f;
				return 1;
			}
			if (vParam0.z == 1f)
			{
				vVar1.f_2 = 28.2065f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, false, true))
			{
				*iParam3 = { 498.185f, -1288.535f, 28.1923f };
				*fParam4 = 181.3208f;
				return 1;
			}
			if (vParam0.z == 1f)
			{
				vVar1.f_2 = 28.2065f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, false, true))
			{
				*iParam3 = { 504.1738f, -1421.251f, 28.2065f };
				*fParam4 = 83.2905f;
				return 1;
			}
			if (vParam0.z == 1f)
			{
				vVar1.f_2 = 73f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, 951.1704f, -147.0047f, 71.54326f, 1005.245f, -98.44745f, 95.62679f, 70f, false, true))
			{
				*iParam3 = { 961.3104f, -150.1964f, 73.4016f };
				*fParam4 = 58.9938f;
				return 1;
			}
			if (vParam0.z == 1f)
			{
				vVar1.f_2 = 52f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, false, true))
			{
				*iParam3 = { 1118.751f, 262.0209f, 79.8555f };
				*fParam4 = 52.3086f;
				return 1;
			}
			else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, 1137.022f, 89.06853f, 71.89022f, 1010.046f, -91.56699f, 103.4568f, 180f, false, true))
			{
				*iParam3 = { 1134.053f, 53.1835f, 79.7553f };
				*fParam4 = 145.5134f;
				return 1;
			}
			if (vParam0.z == 1f)
			{
				vVar1.f_2 = 30.6f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, 191.8731f, -723.553f, 40.23576f, 79.58656f, -687.6684f, 29.54734f, 85f, false, true))
			{
				iVar0 = 2;
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0) == 0)
				{
					*iParam3 = { 182.6361f, -753.5836f, 31.8051f };
					*fParam4 = 162.0019f;
				}
				else
				{
					*iParam3 = { 81.5318f, -675.4875f, 30.5695f };
					*fParam4 = 341.8541f;
				}
				return 1;
			}
			if (vParam0.z == 1f)
			{
				vVar1.f_2 = 33.5f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, false, true))
			{
				*iParam3 = { -88.4f, -660.9f, 35f };
				*fParam4 = -20f;
				return 1;
			}
			else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, false, true))
			{
				*iParam3 = { 61.4f, -653.2f, 32f };
				*fParam4 = 160f;
				return 1;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.258f, 5.7109f, 10f, false, true))
			{
				*iParam3 = { 484.0132f, -3033.162f, 5.0717f };
				*fParam4 = 140.7302f;
				return 1;
			}
			return 0;
		}

float func_200(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return SYSTEM::VDIST2(Param0, Param0.f_1, 0f, Param3, Param3.f_1, 0f);
}

int func_201()
{
	int iVar0;

	iVar0 = func_129();
	if (iVar0 == 0)
	{
		if (func_202(65))
		{
			return 1;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("AMBIENT_SOLOMON")) > 0)
		{
			return 1;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_202(66))
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_202(65))
		{
			return 1;
		}
	}
	return 0;
}

int func_202(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

bool func_203(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	vVar0 = { vParam3 - vParam0 };
	return ((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= (fParam6 * fParam6);
}

int func_204(vector3 vParam0, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0[15];
	vector3 vVar46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	bool bVar110;
	int iVar111;

	bVar110 = false;
	switch (iParam3)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 140f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			vVar46[9 /*3*/].f_2 = (vVar46[9 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[10 /*3*/].f_2 = (vVar46[10 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[11 /*3*/].f_2 = (vVar46[11 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[12 /*3*/].f_2 = (vVar46[12 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[13 /*3*/].f_2 = (vVar46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0[iVar109 /*3*/], vVar46[iVar109 /*3*/], fVar92[iVar109], bVar110, true))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

bool func_205(int iParam0, vector3 vParam1)
{
	return SYSTEM::VDIST2(vParam1, func_207(iParam0)) < func_206(iParam0);
}

float func_206(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000000f;
		case 2:
			return 1000000f;
		case 3:
			return 1500000f;
		case 4:
			return 500000f;
		case 5:
			return 500000f;
		case 6:
			return 500000f;
		case 7:
			return 500000f;
		case 8:
			return 500000f;
	}
	return 0f;
}

Vector3 func_207(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1155.877f, 48.3426f, 52.4985f;
		case 2:
			return -1245.12f, -2818.38f, 12.94f;
		case 3:
			return -2176.19f, 3092.07f, 31.81f;
		case 4:
			return 1701.666f, 2586.261f, 51.4925f;
		case 5:
			return 3525.058f, 3711.323f, 35.6423f;
		case 6:
			return 548.1421f, -3157.961f, 5.0696f;
		case 7:
			return -1142.411f, -526.4487f, 31.6878f;
		case 8:
			return 456.8879f, -985.2783f, 35.6895f;
	}
	return 0f, 0f, 0f;
}

int func_208(vector3 vParam0, vector3 vParam3, vector3 vParam6)
{
	if (((((vParam0.x > vParam3.x && vParam0.x < vParam6.x) && vParam0.y > vParam3.y) && vParam0.y < vParam6.y) && vParam0.z > vParam3.z) && vParam0.z < vParam6.z)
	{
		return 1;
	}
	return 0;
}

int func_209(vector3 vParam0, int iParam3, float fParam4, int iParam5)
{
	vector3 vVar0;

	vVar0 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar0.f_2 = 28f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0, 400.9871f, -1659.756f, 26.91615f, 437.6566f, -1617.479f, 48.34185f, 45f, false, true))
	{
		if (iParam5 < 4)
		{
			*iParam3 = { 413.7399f, -1608.911f, 28.161f };
			*fParam4 = 238.2568f;
		}
		else
		{
			*iParam3 = { 416.8107f, -1666.514f, 28.1758f };
			*fParam4 = 144.8478f;
		}
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0, -1112.586f, -2674.767f, 12.56804f, -1215.468f, -2854.589f, 19.44588f, 41.25f, false, true))
	{
		if (iParam5 < 4)
		{
			*iParam3 = { -1094.492f, -2662.27f, 12.6066f };
			*fParam4 = 196.0365f;
		}
		else
		{
			*iParam3 = { -1076.736f, -2684.039f, 12.807f };
			*fParam4 = 211.7278f;
		}
		return 1;
	}
	return 0;
}

int func_210(vector3 vParam0, vector3 vParam3, var uParam6, var uParam7, var uParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	vector3 vVar14;
	vector3 vVar17;
	float fVar20;

	iVar10 = 1;
	if (!func_198(vParam3))
	{
		iVar10 = 9;
	}
	iVar9 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(vParam3, 1, iVar10, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar9))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(iVar9, &vVar0);
		if (PATHFIND::_GET_POINT_ON_ROAD_SIDE(vVar0, 0, &vVar3) && PATHFIND::_GET_POINT_ON_ROAD_SIDE(vVar0, 1, &vVar6))
		{
			vVar11 = { vVar3 - vVar0 };
			vVar14 = { -vVar11.y, vVar11.x, 0f };
			vVar17 = { vParam0 - vParam3 };
			fVar20 = func_212(vVar14, vVar17);
			if (fVar20 < 0f)
			{
				*uParam7 = { vVar3 };
				*uParam8 = uParam6;
				return 1;
			}
			else
			{
				*uParam7 = { vVar6 };
				*uParam8 = (*uParam8 + 180f);
				*uParam8 = func_211(*uParam8, 0f, 360f);
				return 1;
			}
		}
		else if (PATHFIND::_GET_POINT_ON_ROAD_SIDE(vVar0, -1, &vVar3))
		{
			*uParam7 = { vVar3 };
			*uParam8 = uParam6;
			return 1;
		}
	}
	return 0;
}

float func_211(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

float func_212(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_213(int iParam0, vector3 vParam1, Vector3* vParam4, float* fParam5, var uParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;

	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar3 = 0;
	iVar6 = *uParam6 + 2;
	iVar7 = 50;
	bVar8 = false;
	iVar9 = 1;
	if (!func_198(vParam1))
	{
		iVar9 = 9;
	}
	func_215(vParam1, vParam1, &(Local_68.f_2[iParam0 /*23*/].f_12), &(Local_68.f_2[iParam0 /*23*/].f_15), iParam7);
	if (func_214(Local_68.f_2[iParam0 /*23*/].f_12, Local_68.f_2[iParam0 /*23*/].f_15))
	{
		if (!func_209(vParam1, vParam4, fParam5, 1) && !func_199(vParam1, vParam4, fParam5, 1))
		{
			while (!bVar8 && *uParam6 < iVar6)
			{
				if (vParam1.z == 1f)
				{
					fVar0 = 0f;
				}
				if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *uParam6, vParam4, fParam5, &uVar4, iVar9, fVar0, fVar1))
				{
					iVar5 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*vParam4, 1, iVar9, 3f, 0f);
					if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar5))
					{
						fVar2 = (vParam1.z - vParam4->f_2);
						if (fVar2 < 0f)
						{
							fVar2 = (fVar2 * -1f);
						}
						if (func_197(vParam1, *vParam4) || fVar2 < 0.5f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), false))
							{
								iVar3 = NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]);
							}
							if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(*vParam4, 3f, 3f, 3f, iVar3))
							{
								bVar8 = true;
							}
						}
					}
				}
				*uParam6++;
				if (*uParam6 >= iVar7)
				{
					bVar8 = true;
				}
			}
		}
		else
		{
			bVar8 = true;
		}
		if (bVar8)
		{
			return 1;
		}
	}
	return 0;
}

int func_214(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	if (PATHFIND::_ARE_PATH_NODES_LOADED_IN_AREA(Param0, Param0.f_1, Param3, Param3.f_1))
	{
		return 1;
	}
	return 0;
}

void func_215(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, var uParam6, var uParam7, int iParam8)
{
	vector3 vVar0;
	vector3 vVar3;

	if (Param3 <= Param0)
	{
		vVar0.x = Param3;
		vVar3.x = Param0;
	}
	else
	{
		vVar0.x = Param0;
		vVar3.x = Param3;
	}
	if (Param3.f_1 <= Param0.f_1)
	{
		vVar0.f_1 = Param3.f_1;
		vVar3.f_1 = Param0.f_1;
	}
	else
	{
		vVar0.f_1 = Param0.f_1;
		vVar3.f_1 = Param3.f_1;
	}
	vVar0 = { vVar0 - Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	vVar3 = { vVar3 + Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	if (!func_95(vVar0, *uParam6, 1056964608 /* Float: 0.5f */, 0) || !func_95(vVar0, *uParam6, 1056964608 /* Float: 0.5f */, 0))
	{
		*uParam6 = { vVar0 };
		*uParam7 = { vVar3 };
	}
	PATHFIND::_0x07FB139B592FA687(*uParam6, uParam6->f_1, *uParam7, uParam7->f_1);
}

Vector3 func_216(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_217(int iParam0)
{
	if (Local_68.f_2[iParam0 /*23*/].f_22 != 0 && !MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 6))
	{
		func_116(Local_68.f_2[iParam0 /*23*/].f_22, iParam0);
		MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 6);
	}
}

int func_218(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;

	iVar0 = NETWORK::NET_TO_PED(Local_68.f_2[iParam0 /*23*/].f_1);
	iVar1 = NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]);
	vVar3 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_68.f_2[iParam0 /*23*/]), false) };
	if (PED::IS_PED_FLEEING(iVar0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_COMBAT(iVar0, 0))
	{
		return 1;
	}
	if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iVar1, 2, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iVar1, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iVar1, 0, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iVar1, 1, 7000))
	{
		return 1;
	}
	else if (MISC::IS_BULLET_IN_AREA(vVar3, 7f, false))
	{
		if (MISC::IS_BULLET_IN_AREA(vVar3, 7f, true))
		{
			func_219(NETWORK::PARTICIPANT_ID_TO_INT(), 1, 37);
		}
		return 1;
	}
	else
	{
		fVar6 = 15f;
		vVar7 = { vVar3 };
		vVar10 = { vVar7 };
		vVar7.x = (vVar7.x - fVar6);
		vVar7.f_1 = (vVar7.y - fVar6);
		vVar7.f_2 = (vVar7.z - fVar6);
		vVar10.x = (vVar10.x + fVar6);
		vVar10.f_1 = (vVar10.y + fVar6);
		vVar10.f_2 = (vVar10.z + fVar6);
		if (MISC::IS_PROJECTILE_IN_AREA(vVar7, vVar10, false))
		{
			if (MISC::IS_PROJECTILE_IN_AREA(vVar7, vVar10, true))
			{
				func_219(NETWORK::PARTICIPANT_ID_TO_INT(), 1, 37);
			}
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()))
	{
		iVar2 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()));
		if (!PED::IS_PED_INJURED(iVar2))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, iVar2, true))
				{
					func_219(NETWORK::PARTICIPANT_ID_TO_INT(), 1, 37);
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, iVar2, true))
				{
					func_219(NETWORK::PARTICIPANT_ID_TO_INT(), 1, 37);
					return 1;
				}
			}
		}
	}
	if (Local_68.f_2[iParam0 /*23*/].f_3 == -1 && Local_68.f_2[iParam0 /*23*/].f_7 == 3)
	{
	}
	return 0;
}

void func_219(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != -1 && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)))
	{
		if (func_10(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)), 1, 1))
		{
			PLAYER::REPORT_CRIME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)), iParam2, PLAYER::GET_WANTED_LEVEL_THRESHOLD(iParam1));
		}
	}
}

void func_220()
{
	if (MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 19))
	{
		if (MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 16) && !MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 17))
		{
			if (!func_52(0))
			{
				MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 17);
				func_39(1, 0, 0);
				MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 18);
			}
		}
		if (MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 15) && !MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 16))
		{
			if (func_52(0))
			{
				MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 16);
			}
		}
		if (!MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 15))
		{
			func_20(&uLocal_2621, 7, 0, "TaxiDispatch", 0, 1);
			if (func_221(&uLocal_2621, 131, "MPTXIAU", "MPTXI_E1", 0, 0))
			{
				MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 15);
			}
		}
	}
}

int func_221(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (func_300())
	{
		return 0;
	}
	if (func_299())
	{
		return 0;
	}
	iVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_222(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, iVar0, bVar1, iVar2, iVar0, iVar0, -1);
}

int func_222(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_298(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_297(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_292(iParam6))
	{
		return 0;
	}
	if (func_289(iVar0, iVar1, iVar2))
	{
		if (func_288())
		{
			return 0;
		}
		func_287();
		return func_229(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_228(iParam4))
	{
		return 0;
	}
	func_223(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_223(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1370527.f_40.f_1 = iParam0;
	Global_1370527.f_40.f_2 = iParam1;
	Global_1370527.f_40.f_3 = iParam2;
	StringCopy(&(Global_1370527.f_40.f_4), sParam3, 16);
	Global_1370527.f_40.f_8 = iParam4;
	Global_1370527.f_40.f_9 = iParam5;
	Global_1370527.f_40.f_14 = iParam6;
	func_224(iParam4);
	func_287();
	Global_1370527.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_224(int iParam0)
{
	if (func_227(iParam0))
	{
		func_226();
		return;
	}
	func_225();
}

void func_225()
{
	Global_1370527.f_40.f_10 = 0;
}

void func_226()
{
	Global_1370527.f_40.f_10 = 1;
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_228(int iParam0)
{
	return iParam0 > Global_1370527.f_40.f_8;
}

int func_229(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	char cVar0[16];

	func_286();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_283(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&cVar0, "CELL_226", 16);
		return func_280(uParam0, iParam1, sParam3, sParam4, &cVar0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_283(uParam0, sParam3, sParam4);
		}
		return func_272(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_271(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_259(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_258(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_230(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_230(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;

	func_257();
	bVar0 = true;
	if (func_232(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_231(120000);
		return 1;
	}
	return 0;
}

void func_231(int iParam0)
{
	Global_1370527.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1370527.f_40.f_12 = 1;
}

int func_232(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;

	iVar0 = func_123();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_251(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1370527.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_250(sParam5, bParam6, &iVar3);
	uVar5 = func_248(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_247(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_236(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		func_235();
	}
	func_257();
	func_234();
	func_233();
	return 1;
}

void func_233()
{
	Global_1370527.f_57 = 0;
	Global_1370527.f_57.f_1 = 0;
}

void func_234()
{
	Global_1370527.f_40 = 3;
}

void func_235()
{
	MISC::SET_BIT(&Global_7356, 8);
}

int func_236(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;

	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_237(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			MISC::SET_BIT(&Global_4269765, 0);
		}
		return 1;
	}
	return 0;
}

int func_237(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;

	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_128();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_4269750 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("APPEMAIL")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("APPMPEMAIL")) > 0)
		{
			return 0;
		}
	}
	if (func_246() == 0)
	{
		func_244();
		return 0;
	}
	func_243(Global_4269749);
	StringCopy(&(Global_4268500[Global_4269749 /*104*/]), sParam1, 64);
	Global_4268500[Global_4269749 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4268500[Global_4269749 /*104*/].f_24 = iParam2;
	}
	Global_4268500[Global_4269749 /*104*/].f_25 = iParam7;
	Global_4268500[Global_4269749 /*104*/].f_26 = iParam8;
	Global_4268500[Global_4269749 /*104*/].f_29 = iParam9;
	Global_4268500[Global_4269749 /*104*/].f_30 = iParam12;
	Global_4268500[Global_4269749 /*104*/].f_31 = iParam11;
	Global_4268500[Global_4269749 /*104*/].f_28 = 0;
	Global_4268500[Global_4269749 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_33), sParam4, 64);
	Global_4268500[Global_4269749 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_50), sParam5, 64);
	Global_4268500[Global_4269749 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_83), sParam15, 64);
	func_128();
	switch (iParam16)
	{
		case 3:
			Global_4268500[Global_4269749 /*104*/].f_99[Global_19486] = 1;
			break;
		case 0:
			Global_4268500[Global_4269749 /*104*/].f_99[0] = 1;
			break;
		case 2:
			Global_4268500[Global_4269749 /*104*/].f_99[2] = 1;
			break;
		case 1:
			Global_4268500[Global_4269749 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_19486)
		{
			case 0:
				func_242(0);
				break;
			case 1:
				func_242(1);
				break;
			case 2:
				func_242(2);
				break;
			case 3:
				func_242(3);
				break;
			default:
				break;
		}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4269750 = 1;
				break;
			case 0:
				Global_4269750 = 1;
				break;
			case 2:
				Global_4269750 = 1;
				break;
			case 1:
				Global_4269750 = 1;
				break;
		}
	}
	Global_21874[Global_4269749] = 0;
	if (bParam10)
	{
		func_128();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
			}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_77())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19475, true);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_241(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_239(1);
			func_241(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	func_238(iParam0, sParam1);
	return 1;
}

void func_238(int iParam0, char* sParam1)
{
	if (!func_120())
	{
		return;
	}
	UNK_0x6DFDEDC7A51E8DAE(iParam0, -1180597171, MISC::GET_HASH_KEY(sParam1), 0);
}

void func_239(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	Global_21873 = 0;
	Global_7961 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_7925[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_135(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_7357, 3))
								{
									iVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19668 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_61(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_240(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111638.f_14136[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111638.f_14136[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111638.f_14136[iVar3 /*104*/].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_240(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76622)
								{
									iVar4 = 0;
									iVar4 = Global_4268499;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268500[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268500[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268500[iVar5 /*104*/].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_240(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42607;
											break;
										case 1:
											iVar6 = Global_42608;
											break;
										case 2:
											iVar6 = Global_42609;
											break;
										default:
											break;
									}
									func_240(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_240(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_61(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7362);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_7357, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_61(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_7357, 3))
								{
									iVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19668 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_61(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_61(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_7363[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_7357, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_61(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_240(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_240(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_240(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_61(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_61(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_61(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_61(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_61(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_241(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_242(int iParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = Global_111638.f_14046[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_243(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;

	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_4268500[iParam0 /*104*/].f_18 = iVar0;
	Global_4268500[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4268500[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4268500[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4268500[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4268500[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_244()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4269749 = 11;
	Global_4268500[Global_4269749 /*104*/].f_18 = -1;
	Global_4268500[Global_4269749 /*104*/].f_18.f_1 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_2 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_3 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_245(Global_4268500[iVar2 /*104*/].f_18, Global_4268500[Global_4269749 /*104*/].f_18))
		{
			Global_4269749 = iVar2;
		}
		iVar2++;
	}
	Global_4268500[Global_4269749 /*104*/].f_24 = 1;
}

int func_245(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;

	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_246()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4268500[iVar2 /*104*/].f_24 == 0)
		{
			Global_4269749 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4269749 = 11;
	Global_4268500[Global_4269749 /*104*/].f_18 = -1;
	Global_4268500[Global_4269749 /*104*/].f_18.f_1 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_2 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_3 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4268500[iVar2 /*104*/].f_24 == 0 || Global_4268500[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_245(Global_4268500[iVar2 /*104*/].f_18, Global_4268500[Global_4269749 /*104*/].f_18))
			{
				Global_4269749 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4269749 == 11)
	{
		return 0;
	}
	Global_4268500[Global_4269749 /*104*/].f_99[0] = 0;
	Global_4268500[Global_4269749 /*104*/].f_99[1] = 0;
	Global_4268500[Global_4269749 /*104*/].f_99[2] = 0;
	return 1;
}

int func_247(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;

	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		case 1:
			sParam16 = "NULL";
			break;
		case 2:
			break;
		default:
			break;
	}
	iVar0 = 3;
	if (func_237(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			MISC::SET_BIT(&Global_4269765, 0);
		}
		return 1;
	}
	return 0;
}

int func_248(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_249(2, iParam1);
	return iParam0;
}

void func_249(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		case 2:
			bVar1 = true;
			break;
		default:
			return;
	}
	if (bVar0)
	{
		switch (*iParam1)
		{
			case 1:
			case 3:
				break;
			case 0:
				*iParam1 = 1;
				break;
			case 2:
				*iParam1 = 3;
				break;
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*iParam1)
		{
			case 2:
			case 3:
				break;
			case 0:
				*iParam1 = 2;
				break;
			case 1:
				*iParam1 = 3;
				break;
			default:
				return;
		}
		return;
	}
}

char* func_250(char* sParam0, bool bParam1, int iParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_20;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_249(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::_GET_LABEL_TEXT(sParam0);
}

int func_251(int iParam0)
{
	int iVar0;

	iVar0 = func_254(iParam0);
	if (iVar0 == -1)
	{
		func_252(iParam0, 1);
		return 0;
	}
	Global_1389078[iVar0 /*5*/].f_4 = 1;
	return Global_1389078[iVar0 /*5*/].f_2;
}

void func_252(int iParam0, bool bParam1)
{
	if (!func_10(iParam0, 0, 1))
	{
		return;
	}
	if (func_254(iParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (iParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_253(iParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = iParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

int func_253(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_254(int iParam0)
{
	int iVar0;

	if (!func_10(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1389078[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1389078[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_255(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_255(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;

	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1389078[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1389078[iParam0 /*5*/].f_2), 64);
			HUD::_THEFEED_ADD_TXD_REF(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1389078[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389239)
	{
		Global_1389078[iVar32 /*5*/] = { Global_1389078[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_256(&(Global_1389078[iVar32 /*5*/]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_256(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_123();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_257()
{
	Global_1370527.f_40.f_9 = 4;
}

int func_258(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;

	func_257();
	bVar0 = false;
	return func_232(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_259(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;

	bVar0 = false;
	return func_260(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_260(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;

	iVar0 = func_123();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_251(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1370527.f_40.f_13))
			{
				return 0;
			}
		}
		Global_21866 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_250(sParam5, bParam6, &iVar3);
	uVar5 = func_248(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_270(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_262(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		func_235();
	}
	func_261();
	func_234();
	func_233();
	return 1;
}

void func_261()
{
	Global_1370527.f_40.f_9 = 3;
}

int func_262(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;

	MISC::CLEAR_BIT(&Global_7356, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_264(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3 /*6*/] = { func_263(iParam0) };
			Global_8043 = iParam0;
			MISC::SET_BIT(&Global_7356, 1);
			MISC::SET_BIT(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_263(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_3;
}

int func_264(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;

	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_128();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_111638.f_14046[Global_19486 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("APPTEXTMESSAGE")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("APPTEXTMESSAGE")) > 0)
		{
			return 0;
		}
	}
	if (func_269() == 0)
	{
		func_267();
		return 0;
	}
	func_266(Global_21872);
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/]), sParam1, 64);
	Global_111638.f_14136[Global_21872 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111638.f_14136[Global_21872 /*104*/].f_24 = iParam2;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_25 = iParam7;
	Global_111638.f_14136[Global_21872 /*104*/].f_26 = iParam8;
	Global_111638.f_14136[Global_21872 /*104*/].f_29 = iParam9;
	Global_111638.f_14136[Global_21872 /*104*/].f_30 = iParam12;
	Global_111638.f_14136[Global_21872 /*104*/].f_31 = iParam11;
	Global_111638.f_14136[Global_21872 /*104*/].f_28 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_33), sParam4, 64);
	Global_111638.f_14136[Global_21872 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_50), sParam5, 64);
	Global_111638.f_14136[Global_21872 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_83), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_7356, 10))
	{
		Global_111638.f_14136[Global_21872 /*104*/].f_99[0] = 1;
		Global_111638.f_14136[Global_21872 /*104*/].f_99[1] = 1;
		Global_111638.f_14136[Global_21872 /*104*/].f_99[2] = 1;
		Global_8062 = 4;
		func_242(0);
		func_242(2);
		func_242(1);
	}
	else
	{
		func_128();
		switch (iParam16)
		{
			case 3:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[Global_19486] = 1;
				break;
			case 0:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[0] = 1;
				break;
			case 2:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[2] = 1;
				break;
			case 1:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19486)
			{
				case 0:
					func_242(0);
					Global_8062 = 0;
					break;
				case 1:
					func_242(1);
					Global_8062 = 1;
					break;
				case 2:
					func_242(2);
					Global_8062 = 2;
					break;
				case 3:
					func_242(3);
					Global_8062 = 3;
					break;
				default:
					Global_8062 = 4;
					break;
			}
		}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_7356, 10))
		{
			Global_111638.f_14046[0 /*20*/].f_17 = 1;
			Global_111638.f_14046[1 /*20*/].f_17 = 1;
			Global_111638.f_14046[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111638.f_14046[Global_19486 /*20*/].f_17 = 1;
					break;
				case 0:
					Global_111638.f_14046[0 /*20*/].f_17 = 1;
					break;
				case 2:
					Global_111638.f_14046[2 /*20*/].f_17 = 1;
					break;
				case 1:
					Global_111638.f_14046[1 /*20*/].f_17 = 1;
					break;
			}
		}
	}
	Global_21874[Global_21872] = 0;
	if (bParam10)
	{
		func_128();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
			}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_77())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19475, true);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_241(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_239(1);
			func_241(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	func_265(iParam0, sParam1);
	return 1;
}

void func_265(int iParam0, char* sParam1)
{
	if (!func_120())
	{
		return;
	}
	UNK_0x6DFDEDC7A51E8DAE(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0);
}

void func_266(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;

	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_111638.f_14136[iParam0 /*104*/].f_18 = iVar0;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_267()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_268(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_24 = 1;
}

int func_268(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;

	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_269()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2 /*104*/].f_24 == 0)
		{
			Global_21872 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2 /*104*/].f_24 == 0 || Global_111638.f_14136[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_268(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
			{
				Global_21872 = iVar2;
			}
		}
		if (Global_111638.f_14136[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_21872 == 34)
	{
		return 0;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_99[0] = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_99[1] = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_99[2] = 0;
	return 1;
}

int func_270(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;

	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		case 1:
			sParam16 = "NULL";
			break;
		case 2:
			break;
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_7356, 10);
	iVar0 = 3;
	if (func_264(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			Global_7966[3 /*6*/] = { func_263(iParam0) };
			Global_8043 = iParam0;
			StringCopy(&Global_8044, sParam5, 64);
			MISC::SET_BIT(&Global_7356, 1);
			MISC::SET_BIT(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

int func_271(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_261();
	bVar0 = true;
	if (func_260(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_231(120000);
		return 1;
	}
	return 0;
}

int func_272(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (MISC::IS_BIT_SET(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (MISC::IS_BIT_SET(iParam4, 4))
	{
		bVar0 = func_279(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_278(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (MISC::IS_BIT_SET(iParam4, 3))
		{
			func_277(1);
		}
		if (MISC::IS_BIT_SET(iParam4, 5))
		{
			func_276(1);
		}
		func_275();
		func_234();
		func_274();
		func_273();
		return 1;
	}
	return 0;
}

void func_273()
{
	Global_2546572 = 0;
}

void func_274()
{
	Global_1370527.f_57 = 1;
	Global_1370527.f_57.f_1 = 0;
}

void func_275()
{
	Global_1370527.f_40.f_9 = 1;
}

void func_276(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7358, 0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7358, 0);
	}
}

void func_277(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 20);
	}
}

int func_278(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_138(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_118(sParam3, iParam4, bParam7);
}

int func_279(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_138(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 1;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_118(sParam3, iParam4, bParam7);
}

int func_280(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_282(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_281();
		func_275();
		func_234();
		func_274();
		func_273();
		return 1;
	}
	return 0;
}

void func_281()
{
	Global_21823 = 0;
}

bool func_282(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_138(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 1;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 1;
	Global_20859 = 0;
	StringCopy(&Global_20953, sParam5, 24);
	Global_2621441 = 0;
	return func_118(sParam3, iParam4, bParam8);
}

int func_283(var uParam0, char* sParam1, char* sParam2)
{
	if (func_285(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_284();
		func_234();
		func_274();
		return 1;
	}
	return 0;
}

void func_284()
{
	Global_1370527.f_40.f_9 = 2;
}

bool func_285(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_138(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_118(sParam2, iParam3, 0);
}

void func_286()
{
	Global_1370527.f_55 = Global_1370527.f_40.f_1;
	Global_1370527.f_55.f_1 = Global_1370527.f_40.f_10;
}

void func_287()
{
	Global_1370527.f_40 = 1;
}

bool func_288()
{
	return Global_1370527.f_40 == 1;
}

int func_289(int iParam0, int iParam1, int iParam2)
{
	if (!func_290(iParam0))
	{
		return 0;
	}
	if (Global_1370527.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1370527.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_290(int iParam0)
{
	if (!func_291())
	{
		return 0;
	}
	if (!Global_1370527.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_291()
{
	if (Global_1370527.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_292(int iParam0)
{
	if (func_296())
	{
		return 0;
	}
	if (func_295())
	{
		return 0;
	}
	if (func_52(0))
	{
		return 0;
	}
	if (Global_1312467.f_18 != 0)
	{
		return 0;
	}
	if (Global_1662006 || func_294())
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iParam0, 6))
	{
		if (func_293())
		{
			return 0;
		}
	}
	return 1;
}

bool func_293()
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1387714);
}

int func_294()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_295()
{
	return Global_1370527.f_40 == 3;
}

bool func_296()
{
	return func_126();
}

int func_297(int iParam0, int iParam1, int iParam2)
{
	if (!func_295())
	{
		return 0;
	}
	return func_289(iParam0, iParam1, iParam2);
}

int func_298(char* sParam0, char* sParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

bool func_299()
{
	return Global_2543673.f_1;
}

int func_300()
{
	if (Global_1370715.f_2)
	{
		return 1;
	}
	return func_301();
}

bool func_301()
{
	return func_296();
}

void func_302(int iParam0)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iParam0 /*23*/]))
	{
		if (Local_68.f_2[iParam0 /*23*/].f_2 == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (!MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 18))
			{
				if (func_26(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21))
				{
					if (!func_87(&uLocal_1701, 30000, 0))
					{
						if (func_303(iParam0, 1109393408 /* Float: 40f */))
						{
							Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_26 = { 0f, 0f, 0f };
							Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_29 = 0f;
							func_32(&uLocal_1701);
						}
					}
					else if (!MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 19))
					{
						MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 19);
					}
				}
			}
		}
	}
}

int func_303(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	int iVar7;

	if (func_10(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_68.f_2[iParam0 /*23*/].f_2)), 1, 1))
	{
		STREAMING::REQUEST_MODEL(Global_2537071.f_796);
		STREAMING::REQUEST_MODEL(Global_2537071.f_797);
		if (STREAMING::HAS_MODEL_LOADED(Global_2537071.f_796))
		{
			if (STREAMING::HAS_MODEL_LOADED(Global_2537071.f_797))
			{
				vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_68.f_2[iParam0 /*23*/].f_2))), true) };
				if (!func_322(vVar3))
				{
					if (func_198(vVar3))
					{
						if (Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25 < 2)
						{
							iVar7 = 0;
						}
						else if (Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25 < 5)
						{
							iVar7 = 9;
						}
						else
						{
							iVar7 = 1;
						}
					}
					else if (Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25 < 5)
					{
						iVar7 = 8;
					}
					else
					{
						iVar7 = 9;
					}
					if (Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 == -1)
					{
						Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 = 0;
					}
					if (func_318(vVar3, &vVar0, &uVar6, &(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34), iVar7, iParam1))
					{
						Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21 = { vVar0 };
						Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_24 = uVar6;
						Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25 = 0;
						Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 = -1;
						return 1;
					}
					else if (Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 >= 5)
					{
						Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25++;
						Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 = 0;
					}
				}
				else if (func_304(vVar3, &vVar0, &uVar6))
				{
					Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21 = { vVar0 };
					Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_24 = uVar6;
					Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25 = 0;
					Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 = -1;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_304(vector3 vParam0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, false, true))
	{
		iVar1 = 5;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (iVar0)
			{
				case 0:
					vVar2 = { -988.9172f, -2428.579f, 19.0608f };
					fVar5 = 148.3473f;
					break;
				case 1:
					vVar2 = { -968.0948f, -2392.327f, 19.056f };
					fVar5 = 150.0203f;
					break;
				case 2:
					vVar2 = { -946.4792f, -2419.659f, 19.0562f };
					fVar5 = 91.6004f;
					break;
				case 3:
					vVar2 = { -899.0128f, -2432.842f, 19.0847f };
					fVar5 = 58.9819f;
					break;
				case 4:
					vVar2 = { -890.7079f, -2272.402f, 18.2077f };
					fVar5 = 135.9921f;
					break;
			}
			if (func_305(vVar2, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */, 1084227584 /* Float: 5f */, 1, 1, 1, 1123024896 /* Float: 120f */, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { vVar2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, false, true))
	{
		iVar1 = 5;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (iVar0)
			{
				case 0:
					vVar2 = { -996.2861f, -2449.917f, 12.6953f };
					fVar5 = 148.5654f;
					break;
				case 1:
					vVar2 = { -1006.094f, -2421.448f, 12.9447f };
					fVar5 = 237.9966f;
					break;
				case 2:
					vVar2 = { -948.7274f, -2403.462f, 12.7341f };
					fVar5 = 111.3975f;
					break;
				case 3:
					vVar2 = { -895.4352f, -2364.867f, 13.4802f };
					fVar5 = 142.0129f;
					break;
				case 4:
					vVar2 = { -906.6598f, -2419.59f, 12.6381f };
					fVar5 = 78.0133f;
					break;
			}
			if (func_305(vVar2, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */, 1084227584 /* Float: 5f */, 1, 1, 1, 1123024896 /* Float: 120f */, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { vVar2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, false, true))
	{
		iVar1 = 5;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (iVar0)
			{
				case 0:
					vVar2 = { -1084.003f, -2690.473f, 19.0585f };
					fVar5 = 213.4924f;
					break;
				case 1:
					vVar2 = { -1087.542f, -2660.057f, 19.0615f };
					fVar5 = 191.5389f;
					break;
				case 2:
					vVar2 = { -1083.4f, -2612.184f, 19.0622f };
					fVar5 = 153.7453f;
					break;
				case 3:
					vVar2 = { -1059.893f, -2570.656f, 19.061f };
					fVar5 = 150.5092f;
					break;
				case 4:
					vVar2 = { -1038.387f, -2533.845f, 19.0498f };
					fVar5 = 150.637f;
					break;
			}
			if (func_305(vVar2, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */, 1084227584 /* Float: 5f */, 1, 1, 1, 1123024896 /* Float: 120f */, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { vVar2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1116.893f, -2675.671f, 12.17757f, -1183.933f, -2789.451f, 38.95185f, 53f, false, true))
	{
		iVar1 = 5;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (iVar0)
			{
				case 0:
					vVar2 = { -1076.408f, -2693.846f, 12.6509f };
					fVar5 = 221.0395f;
					break;
				case 1:
					vVar2 = { -1121.422f, -2703.146f, 12.9444f };
					fVar5 = 326.1454f;
					break;
				case 2:
					vVar2 = { -1095.97f, -2644.177f, 12.6382f };
					fVar5 = 182.0544f;
					break;
				case 3:
					vVar2 = { -1084.046f, -2601.412f, 12.6823f };
					fVar5 = 153.5335f;
					break;
				case 4:
					vVar2 = { -1049.575f, -2589.945f, 12.6066f };
					fVar5 = 135.7366f;
					break;
			}
			if (func_305(vVar2, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */, 1084227584 /* Float: 5f */, 1, 1, 1, 1123024896 /* Float: 120f */, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { vVar2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_305(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	Global_2405072.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(vParam0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam5, bParam18))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (fParam14 > 0f)
	{
		if (func_312(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_306(vParam0, fParam6, iParam7, fParam9, bParam10, bParam11, bParam12, bParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

int func_306(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (bParam4 && !bParam7)
	{
		if (func_10(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				bVar2 = bParam6;
				if (bParam9 > 0f)
				{
					bVar2 = bParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_310(PLAYER::PLAYER_ID()), vParam0, true) <= (bVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_10(iVar1, 1, 1))
		{
			if (!func_308(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (bParam4 == 1 || (bParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_307(iVar1) || !bParam10) && !Global_2425662[iVar1 /*421*/].f_259)
					{
						bVar2 = bParam6;
						if (bParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									bVar2 = bParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((bParam5 || (bParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_310(iVar1), vParam0, true) <= (bVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != bParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_310(iVar1), vParam0, true) <= (bVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_307(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2425662[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_308(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_309(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0 /*876*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_309(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_170();
	}
	if (Global_1312857[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

Vector3 func_310(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if ((func_311() && Global_1590535[iVar0 /*876*/].f_847) && !func_26(Global_1590535[iVar0 /*876*/].f_848))
	{
		return Global_1590535[iVar0 /*876*/].f_848;
	}
	return func_216(iParam0);
}

var func_311()
{
	return Global_2450632.f_17;
}

int func_312(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((bParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || bParam8 == 0)
		{
			if (func_10(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_307(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && bParam9) && bParam6) && func_313(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_216(iVar1), vParam0, true) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_313(int iParam0)
{
	if (func_317(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_316(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2513218))
	{
		return 1;
	}
	if (func_314(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_314(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_315(iParam0);
	if (!iVar0 == func_123())
	{
		if (iVar0 == func_315(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_315(int iParam0)
{
	if (iParam0 != func_123())
	{
		return Global_1628237[iParam0 /*615*/].f_11;
	}
	return func_123();
}

struct<13> func_316(int iParam0)
{
	struct<13> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_317(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2513218 = { func_316(iParam0) };
		Global_2513231 = { func_316(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2513218))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2513231))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513148, 35, &Global_2513218);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513183, 35, &Global_2513231);
				if (Global_2513148 == Global_2513183)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_318(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	var uVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;

	fVar9 = 0f;
	iVar11 = 1;
	if (iParam6 == 0)
	{
		iVar11 = 0;
	}
	bVar12 = false;
	iVar13 = 0;
	fVar14 = 100f;
	fVar15 = 2.5f;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam0, *iParam5, &vVar0, &fVar9, &uVar10, iParam6, fVar14, fVar15))
		{
			if (SYSTEM::VDIST2(vParam0, vVar0) <= (50f * 50f))
			{
				while (!bVar12 && iVar13 < 5)
				{
					if (VEHICLE::_0xA4822F1CF23F4810(&vVar0, &vVar3, &vVar6, 0f, 180f, fParam7, iVar11, 1, 0))
					{
						fVar9 = func_321(0f, 0f, 0f, vVar6, 1);
						if (func_319(vParam0, vVar3, 120f, fParam7))
						{
							if (func_305(*uParam3, 5f, 2f, 1f, 6f, 1, 1, 1, 120f, 0, -1, 1, 0f, 0, 0, 0, 0))
							{
								bVar12 = true;
								vVar16 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar9, 0f, 1f, 0f) };
								vVar19 = { vVar16 - vVar3 };
								vVar22 = { vVar0 - vVar3 };
								if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar19.x, vVar19.y, vVar22.x, vVar22.y) > 60f)
								{
									fVar9 = (fVar9 + 180f);
									fVar9 = func_211(fVar9, 0f, 360f);
								}
								*uParam3 = { vVar3 };
								*iParam4 = fVar9;
								return 1;
							}
							else
							{
								iVar13++;
							}
						}
						else
						{
							iVar13++;
						}
					}
					else
					{
						iVar13++;
					}
				}
			}
			*iParam5++;
		}
		else
		{
			*iParam5++;
		}
	}
	return 0;
}

int func_319(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7)
{
	float fVar0;

	fVar0 = SYSTEM::VDIST2(vParam0, vParam3);
	if (fVar0 >= (fParam6 * fParam6))
	{
		return 0;
	}
	if (fVar0 <= (fParam7 * fParam7))
	{
		return 0;
	}
	if (CAM::IS_SPHERE_VISIBLE(vParam3, 2.5f))
	{
		return 0;
	}
	if (MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(vParam3, 3f, 3f, 3f, 0))
	{
		return 0;
	}
	if (func_320(vParam3, 0))
	{
		return 0;
	}
	return 1;
}

int func_320(vector3 vParam0, bool bParam3)
{
	if (func_12(vParam0, -1144.497f, 43.01712f, 51.94447f, 325f))
	{
		if (func_204(vParam0, 1, 0, 0))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1319.769f, 29.52616f, 49.56616f, -1336.527f, 121.0351f, 75.61888f, 18f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1360.02f, 110.1307f, 52.63413f, -1365.276f, 172.0624f, 72.01312f, 52f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1363.007f, 170.533f, 50.00813f, -1296.903f, 178.8133f, 73.37104f, 35f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1197.521f, 199.8643f, 57.04471f, -1298.04f, 176.1384f, 73.33252f, 34f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1103.745f, 221.1367f, 55.34814f, -1208.394f, 191.0909f, 79.13708f, 45f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -989.0328f, -89.39376f, 32.48801f, -1086.211f, -115.7076f, 50.65051f, 70f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -958.5481f, -111.5455f, 30.76432f, -1132.685f, 190.7841f, 73.90366f, 70f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1077.028f, -139.7337f, 38.73388f, -1299.556f, -15.16894f, 63.4371f, 20f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1319.769f, 29.52616f, 47.56616f, -1287.619f, -24.88864f, 67.5273f, 20f, false, true))
		{
			return 1;
		}
	}
	if (func_205(2, vParam0))
	{
		if (func_204(vParam0, 2, 0, 0))
		{
			return 1;
		}
	}
	if (func_205(3, vParam0))
	{
		if (func_204(vParam0, 3, 0, 0))
		{
			return 1;
		}
	}
	if (func_205(4, vParam0))
	{
		if (func_204(vParam0, 4, 0, 0))
		{
			return 1;
		}
	}
	if (func_205(5, vParam0))
	{
		if (func_204(vParam0, 5, 0, 0))
		{
			return 1;
		}
	}
	if (func_205(6, vParam0))
	{
		if (func_204(vParam0, 6, 0, 0))
		{
			return 1;
		}
	}
	if (!func_201())
	{
		if (func_205(7, vParam0))
		{
			if (func_204(vParam0, 7, 0, 0))
			{
				return 1;
			}
		}
	}
	if (func_205(8, vParam0))
	{
		if (func_204(vParam0, 8, 0, 0))
		{
			return 1;
		}
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 2591.626f, -268.894f, 111.8859f, 2591.331f, -614.4355f, 55.36921f, 70f, false, true))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1112.586f, -2674.767f, 12.56804f, -1215.468f, -2854.589f, 19.44588f, 41.25f, false, true))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, false, true))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, false, true))
	{
		return 1;
	}
	if (((OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, false, true))
	{
		return 1;
	}
	if (func_12(vParam0, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, false, true))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1171.709f, -1524.66f, 23.37969f, -1139.721f, -1573.589f, -1.585432f, 55f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, false, true))
		{
			return 1;
		}
	}
	return 0;
}

float func_321(struct<2> Param0, float fParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_322(vector3 vParam0)
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, false, true))
	{
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, false, true))
	{
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, false, true))
	{
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1116.893f, -2675.671f, 12.17757f, -1183.933f, -2789.451f, 38.95185f, 53f, false, true))
	{
		return 1;
	}
	return 0;
}

void func_323()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_3, iVar0))
			{
				if ((Local_68.f_2[iVar0 /*23*/].f_7 == 11 || Local_68.f_2[iVar0 /*23*/].f_7 == 9) || Local_68.f_2[iVar0 /*23*/].f_7 == 10)
				{
					MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_3), iVar0);
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iVar0 /*23*/].f_1))
				{
					MISC::CLEAR_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_3), iVar0);
				}
			}
			iVar0++;
		}
	}
}

void func_324()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (Local_68.f_2[iVar0 /*23*/].f_3 != -1)
			{
				if (Local_68.f_2[iVar0 /*23*/].f_3 != NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iVar0 /*23*/]))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_68.f_2[iVar0 /*23*/]))
						{
							NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_68.f_2[iVar0 /*23*/], true);
						}
					}
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iVar0 /*23*/].f_1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_68.f_2[iVar0 /*23*/].f_1))
						{
							NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_68.f_2[iVar0 /*23*/].f_1, true);
						}
					}
				}
			}
			else if (Local_68.f_2[iVar0 /*23*/].f_2 != -1)
			{
				if (Local_68.f_2[iVar0 /*23*/].f_2 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iVar0 /*23*/]))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_68.f_2[iVar0 /*23*/]))
						{
							NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_68.f_2[iVar0 /*23*/], false);
						}
						else if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_68.f_2[iVar0 /*23*/]))
						{
						}
					}
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iVar0 /*23*/].f_1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_68.f_2[iVar0 /*23*/].f_1))
						{
							NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_68.f_2[iVar0 /*23*/].f_1, false);
						}
					}
				}
				else
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iVar0 /*23*/]))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_68.f_2[iVar0 /*23*/]))
						{
							NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_68.f_2[iVar0 /*23*/], true);
						}
					}
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iVar0 /*23*/].f_1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_68.f_2[iVar0 /*23*/].f_1))
						{
							NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_68.f_2[iVar0 /*23*/].f_1, true);
						}
					}
				}
			}
			else
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iVar0 /*23*/]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_68.f_2[iVar0 /*23*/]))
					{
						NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_68.f_2[iVar0 /*23*/], true);
					}
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iVar0 /*23*/].f_1))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_68.f_2[iVar0 /*23*/].f_1))
					{
						NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_68.f_2[iVar0 /*23*/].f_1, true);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_325()
{
	switch (Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_43)
	{
		case 0:
			if (Local_68.f_191 > 0)
			{
				Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_43 = 1;
			}
			break;
		case 1:
			func_336();
			func_326();
			if (Local_68.f_191 >= 4)
			{
				Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_43 = 4;
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			func_366();
			break;
	}
}

void func_326()
{
	int iVar0;

	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0);
	if (Local_68.f_189 != iVar0)
	{
		if (Local_68.f_189 < iVar0 || func_327(Local_68.f_189, Local_68.f_189, Local_68.f_189, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_68.f_189);
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_68.f_189);
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_68.f_189);
		}
	}
}

int func_327(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_335(iParam0, bParam3, bParam4) && func_334(iParam1, bParam3, bParam4)) && func_328(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_328(int iParam0, bool bParam1, bool bParam2)
{
	return func_329(2, iParam0, 1, bParam1, bParam2);
}

int func_329(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!MISC::IS_BIT_SET(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_333(iParam0) - func_332(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_332(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_333(iParam0) - func_331(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_332(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_333(iParam0) - func_332(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[PLAYER::PLAYER_ID() /*876*/] != 3)
		{
			iVar1 = (iVar1 - func_330(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 10;
		case 2:
			return 10;
	}
	return 0;
}

int func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389296.f_1;
		case 1:
			return Global_1389296.f_2;
		case 2:
			return Global_1389296.f_3;
	}
	return 0;
}

int func_332(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0 /*421*/].f_209;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0 /*421*/].f_210;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0 /*421*/].f_211;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_333(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389304;
		case 1:
			return Global_1389305;
		case 2:
			return Global_1389306;
	}
	return 0;
}

int func_334(int iParam0, bool bParam1, bool bParam2)
{
	return func_329(1, iParam0, 1, bParam1, bParam2);
}

int func_335(int iParam0, bool bParam1, bool bParam2)
{
	return func_329(0, iParam0, 1, bParam1, bParam2);
}

void func_336()
{
	int iVar0;
	char cVar1[16];

	switch (iLocal_1700)
	{
		case 0:
			if (func_350(131))
			{
				iVar0 = func_340();
				if (iVar0 == 0)
				{
					func_20(&uLocal_2621, 7, 0, "TaxiDispatch", 0, 1);
					if (func_339(&uLocal_2621, 131, "MPTXIAU", "MPTXI_P1", 12, 1, 0, 0, 0))
					{
						iLocal_1700 = 1;
					}
				}
				else if (iVar0 == 9)
				{
				}
				else
				{
					StringCopy(&cVar1, "MPTXI_N", 16);
					StringIntConCat(&cVar1, iVar0, 16);
					func_20(&uLocal_2621, 7, 0, "TaxiDispatch", 0, 1);
					if (func_339(&uLocal_2621, 131, "MPTXIAU", &cVar1, 12, 1, 0, 0, 0))
					{
					}
				}
			}
			else if (MISC::IS_BIT_SET(Global_2537071.f_795, 0))
			{
				if (func_340() == 0)
				{
					if (!func_26(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_21))
					{
						Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_21 = { 0f, 0f, 0f };
						Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_24 = 0f;
					}
					MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_1), 0);
					iLocal_1700 = 2;
				}
				MISC::CLEAR_BIT(&(Global_2537071.f_795), 0);
			}
			break;
		case 1:
			if (func_338())
			{
				if (!func_337())
				{
					if (!func_26(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_21))
					{
						Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_21 = { 0f, 0f, 0f };
						Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_24 = 0f;
					}
					MISC::SET_BIT(&(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_1), 0);
					iLocal_1700 = 2;
				}
				else
				{
					iLocal_1700 = 0;
				}
			}
			break;
		case 2:
			if (!MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_1, 0))
			{
				iLocal_1700 = 0;
			}
			break;
	}
}

int func_337()
{
	if (Global_20854 == 1 || Global_21821 == 1)
	{
		return 1;
	}
	return 0;
}

int func_338()
{
	if (Global_20805 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_339(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_138(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	if (iParam5 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	Global_2621441 = 1;
	return func_118(sParam3, iParam4, bParam8);
}

int func_340()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	int iVar9;

	if (!MISC::IS_BIT_SET(Global_2537071.f_795, 0))
	{
		if (IntToFloat(func_172(PLAYER::PLAYER_ID())) <= (IntToFloat(iLocal_1878) * 1.5f))
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_175("TXM_H03", -1);
			}
			return 9;
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			return 2;
		}
	}
	if (!func_31())
	{
		return 1;
	}
	if (func_349(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		return 9;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()));
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar1, joaat("TAXI")))
				{
					return 9;
				}
			}
		}
	}
	if (func_348(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		return 4;
	}
	if (Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4 != -1)
	{
		return 4;
	}
	if (MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_1, 0))
	{
		return 4;
	}
	if (func_181(PLAYER::PLAYER_ID(), 1, 0) && Global_1590535[PLAYER::PLAYER_ID() /*876*/] != 16)
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 6f)
	{
		return 9;
	}
	if (func_347(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 9;
	}
	if (func_346(PLAYER::PLAYER_ID(), 0))
	{
		return 9;
	}
	if (func_345())
	{
		return 3;
	}
	if (!func_341(1, 1, 1, 1, 0))
	{
		return 1;
	}
	vVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	fVar8 = 50f;
	iVar9 = 1;
	if (!func_198(vVar2))
	{
		iVar9 = 9;
	}
	if (!PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar2, &vVar5, iVar9, 100f, 2.5f))
	{
		return 3;
	}
	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vVar5, fVar8, fVar8, 20f, false, true, 0))
	{
		return 3;
	}
	if (func_320(vVar2, 1))
	{
		return 3;
	}
	return 0;
}

int func_341(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_344(iParam0, bParam3, bParam4) || func_343(iParam1, bParam3, bParam4)) || func_342(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_342(int iParam0, bool bParam1, bool bParam2)
{
	return func_329(2, iParam0, 0, bParam1, bParam2);
}

int func_343(int iParam0, bool bParam1, bool bParam2)
{
	return func_329(1, iParam0, 0, bParam1, bParam2);
}

int func_344(int iParam0, bool bParam1, bool bParam2)
{
	return func_329(0, iParam0, 0, bParam1, bParam2);
}

int func_345()
{
	if (func_10(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -64f, -850f, 200f, -84f, -795f, 340f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_346(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_208, iParam1);
}

int func_347(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_123())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_348(int iParam0)
{
	int iVar0;

	if (iParam0 != -1)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (Local_68.f_2[iVar0 /*23*/].f_2 != -1)
			{
				if (Local_68.f_2[iVar0 /*23*/].f_2 == iParam0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_349(int iParam0)
{
	int iVar0;

	if (iParam0 != -1)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (Local_68.f_2[iVar0 /*23*/].f_3 != -1)
			{
				if (Local_68.f_2[iVar0 /*23*/].f_3 == iParam0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_350(int iParam0)
{
	if ((Global_21919 || Global_21918) || Global_21920)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (Global_19486.f_1 == 10)
		{
			if (Global_6671 == iParam0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_351()
{
	return Local_68;
}

int func_352(int iParam0)
{
	return Local_263[iParam0 /*44*/];
}

bool func_353()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_142, 18);
}

int func_354()
{
	var uVar0;

	func_362(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_361())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_360())
	{
		return 1;
	}
	if (func_359(159))
	{
		if (!func_358())
		{
			return 1;
		}
	}
	if (func_359(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_355() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_355()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_355()
{
	switch (func_357())
	{
		case 0:
			return func_356();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_356()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("FREEMODE");
		default:
			break;
	}
	return joaat("FREEMODE");
}

int func_357()
{
	return Global_30768;
}

bool func_358()
{
	return Global_2450632.f_598;
}

int func_359(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_360()
{
	return Global_2460680;
}

bool func_361()
{
	return Global_2450632.f_593;
}

void func_362(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_363(iVar0);
					break;
				case 589125870:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar4, 4);
					if (vVar4.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_363(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_10(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_364(iVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar4, vVar0.z);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_364(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*bParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_365()
{
	SYSTEM::WAIT(0);
}

void func_366()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iVar0 /*23*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_68.f_2[iVar0 /*23*/]))
			{
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_68.f_2[iVar0 /*23*/], true);
			}
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_68.f_2[iVar0 /*23*/].f_1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_68.f_2[iVar0 /*23*/].f_1))
			{
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_68.f_2[iVar0 /*23*/].f_1, true);
			}
		}
		iVar0++;
	}
	if (CAM::DOES_CAM_EXIST(iLocal_2600))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_2600))
		{
			func_40();
		}
	}
	if (bLocal_1874)
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1711))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1711);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1712);
	}
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("taxi");
	}
	func_367();
}

void func_367()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_368(struct<21> Param0)
{
	func_378(32, Param0);
	func_376(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_68, 195);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_263, 1409);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_375())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_369(131, 3, MISC::IS_BIT_SET(Global_2537071.f_795, 4));
		func_37(&uLocal_1703, 0, 0);
		Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/] = 0;
	}
	return 1;
}

void func_369(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	Global_8042 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		func_128();
		if (iParam1 == 4)
		{
			func_374(iParam0, 0, 1);
			func_374(iParam0, 1, 1);
			func_374(iParam0, 2, 1);
			func_373(iParam0, 0, 1);
			func_373(iParam0, 1, 1);
			func_373(iParam0, 2, 1);
		}
		else
		{
			if (func_372(iParam0, iParam1) == 1 && func_371(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_374(iParam0, iVar0, 1);
			func_373(iParam0, iVar0, 1);
		}
		if (bParam2)
		{
			if (!Global_76622)
			{
				if (iParam1 != 4)
				{
					if (Global_19486 != iParam1)
					{
						Global_8015[iParam1 /*4*/] = { func_263(iParam0) };
						Global_8032[iParam1] = 1;
						Global_8037[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19486)
					{
					}
					else
					{
						Global_7966[1 /*6*/] = { func_263(iParam0) };
						Global_7966[1 /*6*/].f_5 = iParam1;
						func_370();
					}
				}
				else
				{
					Global_7966[1 /*6*/] = { func_263(iParam0) };
					Global_7966[1 /*6*/].f_5 = iParam1;
					func_370();
				}
			}
			else
			{
				Global_7966[1 /*6*/] = { func_263(iParam0) };
				Global_7966[1 /*6*/].f_5 = iParam1;
				func_370();
			}
		}
	}
}

void func_370()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;

	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_1798[Global_8042 /*29*/].f_7)), 64);
	if (Global_8061 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::_GET_LABEL_TEXT(&(Global_7966[1 /*6*/])), 64);
		sVar32 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_7966[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_7356, 0);
}

int func_371(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

int func_372(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

void func_373(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_374(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_375()
{
	int iVar0;

	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_361())
		{
			return 0;
		}
		if (func_359(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_376(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_367();
			}
			else
			{
				return 0;
			}
		}
		if (!func_377())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_367();
					}
					else
					{
						return 0;
					}
				}
				if (func_361())
				{
					if (!bParam2)
					{
						func_367();
					}
					else
					{
						return 0;
					}
				}
				if (func_359(157))
				{
					if (!bParam2)
					{
						func_367();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_367();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_367();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_367();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_377()
{
	return Global_1312854;
}

void func_378(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_367();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

