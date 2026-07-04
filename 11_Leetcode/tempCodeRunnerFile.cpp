
            } else {
                low = mid + 1;    // The current distance allows too few pairs
            }
        }
        
        return ans;
    }
};

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    