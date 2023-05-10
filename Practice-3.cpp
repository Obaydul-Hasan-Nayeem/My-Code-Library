/*
    WEBINAR-1:
        Topic:  Insights into the Competitive Programming World &
                Navigating the Software Industry Culture for a Flourishing Career
        Guest: Saurav Biswas
        Host: Jarin Tasnim
        Platforms: Facebook Page, Facebook Group, YouTube Channel
        Media Platform: StreamYard
        Visibility: Public


        - Introduction | 5 min
                - Declaring Agenda
                - Brief summary about Onebyzero Edu
                - Brief summary about guest's biography


        - Questions to guest from Host | 20 min
                - (not selected yet)

        - Advertising Onebyzero Edu
                - About us, goal, how to contribute

        - Questions to guest from Live Audience | 20 min
                - (will be selected at the webinar)

        - Guest's Opinion & Feedback about our Initiatives | 5 min

        - Guest's Message to Audiences | 5 min

        - Ending




Questions to guest from Host:
    - সবে মাত্রই ভার্সিটি লাইফ শেষ হলো। কেমন অনুভূতি?
    - প্রোগ্রামিং সম্পর্কে সর্বপ্রথম কবে জেনেছেন?
    - কবে থেকে সিরিয়াসলি প্রোগ্রামিং করা শুরু করেছিলেন?
    - শুরুতে প্রোগ্রামিং এর অন্যান্য ফিল্ডে না গিয়ে কম্পিটিটিভ প্রোগ্রামিং -এই কেন এত টাইম ইনভেস্ট করেছেন?
    - আপনার ICPC, NCPC, IUPC সহ এরকম প্রতিযোগিতা গুলোর অভিজ্ঞতা সম্পর্কে যদি একটু বলতেন।
    - আপনার প্রথম জবটি পাওয়ার ক্ষেত্রে কী কী প্রসেস অনুসরণ করতে হয়েছে? ইন্টারভিউ এক্সপেরিয়েন্স কেমন ছিলো?

  - AI বিশেষ করে ChatGPT আসার পরে কম্পিটিটিভ প্রোগ্রামিং এর চাহিদা কমেছে নাকি বেড়েছে?
  - Google Codejam বন্ধ করে দিলো। এতে কি কম্পিটিটিভ প্রোগ্রামিং এর চাহিদা কমে যাবে?
      - বাংলাদেশের জব ফিল্ডে কম্পিটিটিভ প্রোগ্রামিং এর চাহিদা কেমন?

  - ICPC, NCPC সহ এরকম প্রতিযোগিতা গুলোতে অংশগ্রহন করলে জব ফিল্ডে কিভাবে হেল্প করে? তবে কারও যদি এরকম কোনো রেকর্ড
    একেবারেই না থাকে তাহলে কি সে এই ফিল্ডে জব পাবে না?
  - Online Judge এর রেটিং জব ফিল্ডে কিভাবে হেল্প করে?
      - বাংলাদেশের সফটওয়ার ইন্ডাস্ট্রিতে কম্পিটিটিভ প্রোগ্রামারদের স্যালারি সম্পর্কে যদি একটু ধারণা দিতেন।
      - কেউ কম্পিটিটিভ প্রোগ্রামিং করেনি কিন্তু প্রবলেম সলভ করেছে - তার ক্ষেত্রে জব পাওয়ার পসিবিলিটি কেমন?

*/




#include <bits/stdc++.h>

using namespace std;

int power(int n, int m) {
    if(m == 0) {
        return 1;
    }
    return n * power(n, m - 1);
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << power(n, m) << "\n";

    return 0;
}
